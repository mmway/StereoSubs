#include "stdafx.h"
//#include "Form1.h"

//#include <vcclr.h>
//#include <atlstr.h>
//#include <stdio.h>
//#using <mscorlib.dll>

#include <vector>

#include "cv.h"
#include "cvaux.h"
#include "cxmisc.h"
#include "highgui.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <fstream>
#include <iostream>
#include <cstdlib>


#include "DpxStuff.h"
#include "StereoSubsGlobals.h"



//using namespace StereoSubs;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Drawing::Imaging;

//using System.Drawing.Text;
//using namespace System::Object;
using namespace System::Runtime::InteropServices; // for Marshal::

//////////////////////////////////////SETUP////////////////////////////////////



///////////////////////////////////////////////////////////////////////////////



//random images
IplImage *Ileft, *Iright, *Ipreview;



//32Float, 1-channel images
IplImage *IdownsampledDisparityMap_32f;


//16S, 1-channel images
IplImage *IdownsampledDisparityMap_16s, *IdownsampledDisparityMapLeft_16s, *IdownsampledDisparityMapRight_16s;



//8U, 3-channel images
IplImage *IRGBleft_8u, *IRGBright_8u, *Itemp_8u, *IdownsampledPreview_8u, *IdownsampledLeft_8u, *IdownsampledRight_8u, *IdownsampledDisparityMap_8u, *IdownsampledDisparityMapLeft_8u, *IdownsampledDisparityMapRight_8u;



//8U, 1-channel images
IplImage *ItempRGB1_8u, *ItempRGB2_8u, *ItempRGB3_8u;
IplImage *Itemp1_8u, *Itemp2_8u, *Itemp3_8u;
IplImage *IdownsampledLeft1_8u, *IdownsampledRight1_8u;


//16S, 1-channel images
IplImage ;




void AllocateImages( CvSize sz ){
//CvSize sz = cvGetSize( _I );

IRGBleft_8u = cvCreateImage( sz, IPL_DEPTH_8U, 3 );
IRGBright_8u = cvCreateImage( sz, IPL_DEPTH_8U, 3 );
Itemp_8u = cvCreateImage( sz, IPL_DEPTH_8U, 3 );
IdownsampledLeft_8u = cvCreateImage( sz, IPL_DEPTH_8U, 3 );
IdownsampledRight_8u = cvCreateImage( sz, IPL_DEPTH_8U, 3 );

cvZero( IRGBleft_8u );
cvZero( IRGBright_8u );
cvZero( Itemp_8u );
cvZero( IdownsampledLeft_8u );
cvZero( IdownsampledRight_8u );

IdownsampledDisparityMap_16s = cvCreateImage( sz, IPL_DEPTH_16S, 1 );
IdownsampledDisparityMapLeft_16s = cvCreateImage( sz, IPL_DEPTH_16S, 1 );
IdownsampledDisparityMapRight_16s = cvCreateImage( sz, IPL_DEPTH_16S, 1 );

cvZero( IdownsampledDisparityMap_16s );
cvZero( IdownsampledDisparityMapLeft_16s );
cvZero( IdownsampledDisparityMapRight_16s );


IdownsampledLeft1_8u = cvCreateImage( sz, IPL_DEPTH_8U, 1 );
IdownsampledRight1_8u = cvCreateImage( sz, IPL_DEPTH_8U, 1 );
IdownsampledDisparityMap_8u = cvCreateImage( sz, IPL_DEPTH_8U, 1 );
IdownsampledDisparityMapLeft_8u = cvCreateImage( sz, IPL_DEPTH_8U, 1 );
IdownsampledDisparityMapRight_8u = cvCreateImage( sz, IPL_DEPTH_8U, 1 );
ItempRGB1_8u = cvCreateImage( sz, IPL_DEPTH_8U, 1 );
ItempRGB2_8u = cvCreateImage( sz, IPL_DEPTH_8U, 1 );
ItempRGB3_8u = cvCreateImage( sz, IPL_DEPTH_8U, 1 );
Itemp1_8u = cvCreateImage( sz, IPL_DEPTH_8U, 1 );
Itemp2_8u = cvCreateImage( sz, IPL_DEPTH_8U, 1 );
Itemp3_8u = cvCreateImage( sz, IPL_DEPTH_8U, 1 );

cvZero( IdownsampledLeft1_8u );
cvZero( IdownsampledRight1_8u );
cvZero( IdownsampledDisparityMap_8u );
cvZero( IdownsampledDisparityMapLeft_8u );
cvZero( IdownsampledDisparityMapRight_8u );
cvZero( ItempRGB1_8u );
cvZero( ItempRGB2_8u );
cvZero( ItempRGB3_8u );
cvZero( Itemp1_8u );
cvZero( Itemp2_8u );
cvZero( Itemp3_8u );

IdownsampledDisparityMap_32f = cvCreateImage( sz, IPL_DEPTH_32F, 1 );

cvZero( IdownsampledDisparityMap_32f );


}



void DeallocateImages()
{
cvReleaseImage( &Ileft);
cvReleaseImage( &Iright);
cvReleaseImage( &Ipreview);

cvReleaseImage( &IRGBleft_8u );
cvReleaseImage( &IRGBright_8u );
cvReleaseImage( &Itemp_8u );
cvReleaseImage( &IdownsampledLeft_8u );
cvReleaseImage( &IdownsampledRight_8u );

cvReleaseImage( &IdownsampledDisparityMap_16s );
cvReleaseImage( &IdownsampledDisparityMapLeft_16s );
cvReleaseImage( &IdownsampledDisparityMapRight_16s );


cvReleaseImage( &IdownsampledLeft1_8u );
cvReleaseImage( &IdownsampledRight1_8u );
cvReleaseImage( &IdownsampledDisparityMap_8u );
cvReleaseImage( &IdownsampledDisparityMapLeft_8u );
cvReleaseImage( &IdownsampledDisparityMapRight_8u );

cvReleaseImage( &ItempRGB1_8u );
cvReleaseImage( &ItempRGB2_8u );
cvReleaseImage( &ItempRGB3_8u );
cvReleaseImage( &Itemp1_8u );
cvReleaseImage( &Itemp2_8u );
cvReleaseImage( &Itemp3_8u );

cvReleaseImage( &IdownsampledDisparityMap_32f );

}


///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////


//IplImage convertToIplImage(Bitmap SourceImage)
//{
//	IntPtr ptrImage2 = cvCreateImage(cvSize(SourceImage.Width, SourceImage.Height), 
//											   (unsigned int)IPL_DEPTH_32F, 3);
//
//	IplImage image2 = System::Runtime::InteropServices::Marshal::PtrToStructure(ptrImage2, typeof(IplImage));
//
//
//	BitmapData^ bData = SourceImage.LockBits(gcnew System::Drawing::Rectangle(0, 0, SourceImage.Width, SourceImage.Height)^, 
//											ImageLockMode::ReadWrite, 
//											PixelFormat::Format24bppRgb);
//	image2.imageData = reinterpret_cast<char*>(bData->Scan0.ToPointer());
//	SourceImage.UnlockBits(bData);
//	cvReleaseImage(&reinterpret_cast<IplImage*>(ptrImage2.ToPointer()));
//
//	return image2;
//}

std::string convertSysStrToStdStr( System::String ^ s )
  {
    // convert .NET System::String to std::string
    const char* cstr = (const char*) (Marshal::StringToHGlobalAnsi(s)).ToPointer();
    std::string sstr = cstr;
    Marshal::FreeHGlobal(System::IntPtr((void*)cstr));
    return sstr;
  }



void drawInStereoStuff(double _dDisparityToDraw, IplImage *_IleftToDraw, IplImage *_IrightToDraw, double _dScaleFactorOriginaltoDownsampled, int &_iSubtitlesLinesDrawn, int _iSubtitlesLinesAmount){

	CvFont _fontTextToPlaceIn;
	CvSize _sizeTextToPlaceIn;

	CvPoint _ptPlaceForLeft;
	CvPoint _ptPlaceForRight;

	int _iSubtitlesEndDraw;

	std::string _strTemp;


	//making subtitles string from each line
	_iSubtitlesEndDraw = _iSubtitlesLinesDrawn + _iSubtitlesLinesAmount - 1;	// "-1" because we starting loop for with "zero" on_iSubtitlesLinesDrawn
	for (_iSubtitlesLinesDrawn; _iSubtitlesLinesDrawn <= _iSubtitlesEndDraw; _iSubtitlesLinesDrawn++){
		if ( _iSubtitlesLinesDrawn == _iSubtitlesEndDraw )
			_strTemp += g_vecstrSubtitles[_iSubtitlesLinesDrawn];
		else
			_strTemp += g_vecstrSubtitles[_iSubtitlesLinesDrawn] + "\n";

	}


	if (_dDisparityToDraw < 2)
		_dDisparityToDraw = 2;

	_dDisparityToDraw = cvCeil(double(_dDisparityToDraw) * double(_dScaleFactorOriginaltoDownsampled));

	_ptPlaceForLeft.x = _IleftToDraw->width/2 + cvCeil(_dDisparityToDraw/2);
	_ptPlaceForLeft.y = (_IleftToDraw->height - 1) - 130;

	_ptPlaceForRight.x = _IleftToDraw->width/2 - cvFloor(_dDisparityToDraw/2);
	_ptPlaceForRight.y = (_IleftToDraw->height - 1) - 130;



	//for teting computed disparity placing a subtitles and CIRCLE 
	if (g_bProgramTesting){

		//draw left stuff
		cvCircle(_IleftToDraw,
				 _ptPlaceForLeft,
				 40,
				 cvScalar(255,255,255),
				 CV_FILLED,
				 8,
				 0);

		//draw right stuff
		cvCircle(_IrightToDraw,
				 _ptPlaceForRight,
				 40,
				 cvScalar(255,255,255),
				 CV_FILLED,
				 8,
				 0);

		cvInitFont(&_fontTextToPlaceIn, CV_FONT_HERSHEY_DUPLEX, 1.5, 1.5, 0.0, 2, CV_AA);
		cvGetTextSize(  "TEST test TEST test TEST test TEST test TEST test TEST test TEST test TEST",
						&_fontTextToPlaceIn,
						&_sizeTextToPlaceIn,
						0);

		//place left_image text
		cvPutText(_IleftToDraw,
				  "TEST test TEST test TEST test TEST test TEST test TEST test TEST test TEST",
				  cvPoint( _ptPlaceForLeft.x - cvCeil(double(_sizeTextToPlaceIn.width)/double(2)), _ptPlaceForLeft.y + 100),
				  &_fontTextToPlaceIn,
				  cvScalar(255,255,255));

		//place right_image text
		cvPutText(_IrightToDraw,
				  "TEST test TEST test TEST test TEST test TEST test TEST test TEST test TEST",
				  cvPoint( _ptPlaceForRight.x - cvFloor(double(_sizeTextToPlaceIn.width)/double(2)), _ptPlaceForRight.y + 100),
				  &_fontTextToPlaceIn,
				  cvScalar(255,255,255));
	}
	else{
		if (g_iSubtitlesImage == -1){
			cvInitFont(&_fontTextToPlaceIn, CV_FONT_HERSHEY_DUPLEX, 1.5, 1.5, 0.0, 2, CV_AA);
			cvGetTextSize(  (char*)(void*)Marshal::StringToHGlobalAnsi(gcnew System::String(_strTemp.c_str())),
							&_fontTextToPlaceIn,
							&_sizeTextToPlaceIn,
							0);

			//place left_image text
			cvPutText(_IleftToDraw,
					  (char*)(void*)Marshal::StringToHGlobalAnsi(gcnew System::String(_strTemp.c_str())),
					  cvPoint( _ptPlaceForLeft.x - cvCeil(double(_sizeTextToPlaceIn.width)/double(2)), _ptPlaceForLeft.y + 100),
					  &_fontTextToPlaceIn,
					  cvScalar(255,255,255));

			//place right_image text
			cvPutText(_IrightToDraw,
					  (char*)(void*)Marshal::StringToHGlobalAnsi(gcnew System::String(_strTemp.c_str())),
					  cvPoint( _ptPlaceForRight.x - cvFloor(double(_sizeTextToPlaceIn.width)/double(2)), _ptPlaceForRight.y + 100),
					  &_fontTextToPlaceIn,
					  cvScalar(255,255,255));
		}
	}

}


void drawSubtitlesImage( std::vector<std::string> _vecstrSubtitles, int _iSubtitlesLinesAmount, int &_iSubtitlesLinesDrawn, System::String^ _strSubtitlesFileNameBmp, System::String^ _strSubtitlesFileNamePng, System::String^ _strSubtitlesFileNamePngShort ) 
{
	Bitmap^ bmpImage = gcnew Bitmap( 1, 1);

	IplImage *_ImaskNotBlack;
	//IplImage *_ImaskDilate;
	//IplImage *_ImaskDilateBorder;
	IplImage *_IfinalWithAlpha;

    int iWidth = 0;
    int iHeight = 0;
	int _iSubtitlesEndDraw;


	std::string _strTemp;

	//making subtitles string from each line
	_iSubtitlesEndDraw = _iSubtitlesLinesDrawn + _iSubtitlesLinesAmount - 1;	// "-1" because we starting loop for with "zero" on_iSubtitlesLinesDrawn
	for (_iSubtitlesLinesDrawn; _iSubtitlesLinesDrawn <= _iSubtitlesEndDraw; _iSubtitlesLinesDrawn++){
		if ( _iSubtitlesLinesDrawn == _iSubtitlesEndDraw )
			_strTemp += _vecstrSubtitles[_iSubtitlesLinesDrawn];
		else
			_strTemp += _vecstrSubtitles[_iSubtitlesLinesDrawn] + "\n";

	}


	////refreshing amount subtitles lines that have been drawn till
	//_iSubtitlesLinesDrawn = _iSubtitlesLinesDrawn + _iSubtitlesLinesAmount;

    //// Create the Font object for the image text drawing.
	Font^ MyFont = gcnew Font( gcnew System::String(g_strFontSubtitleName.c_str()), g_fFontSubtitleSize, 
								System::Drawing::FontStyle::Regular, 
								System::Drawing::GraphicsUnit::Point );

    // Create a graphics object to measure the text's width and height.
	Graphics^ MyGraphics = Graphics::FromImage( bmpImage );

    // This is where the bitmap size is determined.
	iWidth = ( (int)MyGraphics->MeasureString( gcnew System::String(_strTemp.c_str()), MyFont ).Width ) * 1.2;	// multipling by 1.2 because of LARGE borders could be apply
	iHeight = ( (int)MyGraphics->MeasureString( gcnew System::String(_strTemp.c_str()), MyFont ).Height ) * 1.2;


    // Create the bmpImage again with the correct size for the text and font.
    bmpImage = gcnew Bitmap( bmpImage, iWidth, iHeight );

    // Add the colors to the new bitmap.
	MyGraphics = Graphics::FromImage( bmpImage );
	MyGraphics->Clear( Color::Black );
	MyGraphics->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::None;
	MyGraphics->DrawString( gcnew System::String(_strTemp.c_str()), MyFont, gcnew SolidBrush( Color::White ), 0, 0 );
	MyGraphics->Flush();

	bmpImage->Save(_strSubtitlesFileNameBmp, System::Drawing::Imaging::ImageFormat::Png);

	////operates on subtitles to make borders on subtitles
		IplImage *_Itemp = cvLoadImage( (char*)(void*)Marshal::StringToHGlobalAnsi(_strSubtitlesFileNameBmp), 0);

		remove( (char*)(void*)Marshal::StringToHGlobalAnsi(_strSubtitlesFileNameBmp) );

		//_ImaskDilateBorder = cvCreateImage( cvSize(_Itemp->width,_Itemp->height), IPL_DEPTH_8U, 1);
		//_ImaskDilate = cvCreateImage( cvSize(_Itemp->width,_Itemp->height), IPL_DEPTH_8U, 1);
		_ImaskNotBlack = cvCreateImage( cvSize(_Itemp->width,_Itemp->height), IPL_DEPTH_8U, 1);
		_IfinalWithAlpha = cvCreateImage( cvSize(_Itemp->width,_Itemp->height), IPL_DEPTH_8U, 4);

		cvCmpS(_Itemp, 1, _ImaskNotBlack , CV_CMP_GE);
		cvDilate(_ImaskNotBlack, _ImaskNotBlack, NULL, g_uiFontSubtitleBorder*2);
		cvSmooth(_ImaskNotBlack, _ImaskNotBlack, CV_MEDIAN, 3, 3, NULL, NULL);
		cvMerge(_Itemp, _Itemp, _Itemp, _ImaskNotBlack, _IfinalWithAlpha);
		


		cvSaveImage( (char*)(void*)Marshal::StringToHGlobalAnsi(_strSubtitlesFileNamePng), _IfinalWithAlpha );
		g_vecstrSubtitlesFileNamesPNGimages.push_back( convertSysStrToStdStr( _strSubtitlesFileNamePngShort ) );
		//cvCmpS(_Itemp, 1, _ImaskDilate , CV_CMP_GE);
		//cvXor(_ImaskDilate, _ImaskNotBlack, _ImaskDilateBorder);
	//

	cvReleaseImage(&_Itemp);
	cvReleaseImage(&_IfinalWithAlpha);
	cvReleaseImage(&_ImaskNotBlack);


}

  // void DrawImagePointF( PaintEventArgs^ e )
  // {
		//// Create image.
		//Image^ newImage = Image::FromFile( "SampImag.jpg" );
		//Graphics^ g = e->Graphics;
		//Bitmap^ bmpImage = gcnew Bitmap( 1, 1 );
	
		//// Create the Font object for the image text drawing.

		//Font^ MyFont = gcnew Font( "Verdana", 24, 
		//						System::Drawing::FontStyle::Bold, 
		//						System::Drawing::GraphicsUnit::Point );

		//// Create point for upper-left corner of image.
		//PointF ulCorner = PointF(100.0F,100.0F);

		//// Draw image to screen.
		//e->Graphics->DrawImage( newImage, ulCorner );
  // }

char* getPtrToCharFromSysString( System::String^ _strSubtitlesFile ){

	int _lastIndex;
	char* _cFileName;
	System::String^ _strFileNameTempToRead;
	array<Char>^_cArraySeparator = gcnew array<Char>{'\\'};
	array<Char>^_cArraySeparatorDot = gcnew array<Char>{'.'};
	array<System::String^>^_strArraySplitedDir;
	array<System::String^>^ _strArraySplitedNameTemp;

	//getting pointer to char* to cvLoadImage
		_strArraySplitedDir = _strSubtitlesFile->ToString()->Split( _cArraySeparator, StringSplitOptions::RemoveEmptyEntries );

		_lastIndex = _strArraySplitedDir->Length;
		_strFileNameTempToRead = _strArraySplitedDir[_lastIndex-1]->ToString();
		_strArraySplitedNameTemp = _strFileNameTempToRead->ToString()->Split( _cArraySeparatorDot, StringSplitOptions::RemoveEmptyEntries );
		_lastIndex = _strArraySplitedNameTemp->Length;
		_strFileNameTempToRead = _strArraySplitedNameTemp[_lastIndex-1]->ToString();

		_cFileName = (char*)(void*)Marshal::StringToHGlobalAnsi(String::Join("/", _strArraySplitedDir));
	//end

	return ( _cFileName );
}

void getTimecodesAndSubtitles ( System::String^ _strSubtitlesFile){
  
	int _iInHours, _iInMin, _iInSec, _iInMiliSec, _iOutHours, _iOutMin, _iOutSec, _iOutMiliSec;
	int _iSubtitleLineCount = 1;
	char buffer[2048];
	std::ifstream myfile;
	CvPoint3D64f _ptTemp;
	std::string _strTemp;
	int _lastIndex;
	double _dTemp;


	char* _cFileName;
	System::String^ _strFileNameTempToRead;
	array<Char>^_cArraySeparator = gcnew array<Char>{'\\'};
	array<Char>^_cArraySeparatorDot = gcnew array<Char>{'.'};
	array<System::String^>^_strArraySplitedDir;
	array<System::String^>^ _strArraySplitedNameTemp;


	//getting pointer to char* to cvLoadImage
		_strArraySplitedDir = _strSubtitlesFile->ToString()->Split( _cArraySeparator, StringSplitOptions::RemoveEmptyEntries );

		_lastIndex = _strArraySplitedDir->Length;
		_strFileNameTempToRead = _strArraySplitedDir[_lastIndex-1]->ToString();
		_strArraySplitedNameTemp = _strFileNameTempToRead->ToString()->Split( _cArraySeparatorDot, StringSplitOptions::RemoveEmptyEntries );
		_lastIndex = _strArraySplitedNameTemp->Length;
		_strFileNameTempToRead = _strArraySplitedNameTemp[_lastIndex-1]->ToString();

		_cFileName = (char*)(void*)Marshal::StringToHGlobalAnsi(String::Join("/", _strArraySplitedDir));
	//end

	myfile.open(_cFileName);

	if (myfile.is_open())
	{
		//needed when reloading another *.srt file 
		g_vecptInOutSubtitlesInMilisec.clear();
		g_vecstrSubtitles.clear();

		while (! myfile.eof() )
		{
		  //reset for next fullSubtitles
		  _iSubtitleLineCount = 1;
			
		  
		  myfile.getline(buffer,2048);
		  //sscanf(buffer, "%d", &_iSubtitleLineCount);

		  myfile.getline(buffer,2048);
		  sscanf(buffer, "%d:%d:%d,%d --> %d:%d:%d,%d", &_iInHours, &_iInMin, &_iInSec, &_iInMiliSec
														 , &_iOutHours, &_iOutMin, &_iOutSec, &_iOutMiliSec);

		  _dTemp = _iInHours*60*60*1000 + _iInMin*60*1000 + _iInSec*1000 + _iInMiliSec;
		  _ptTemp.x = _dTemp;
		  _dTemp = _iOutHours*60*60*1000 + _iOutMin*60*1000 + _iOutSec*1000 + _iOutMiliSec;
		  _ptTemp.y = _dTemp;

		  myfile.getline(buffer,2048);
		  _strTemp.assign(buffer);
		  g_vecstrSubtitles.push_back(buffer);
		  //cout << _iSubtitleLineCount << endl << _iInHours << "  " << _iInMin << "  " << _iInSec << "  " << _iInMiliSec << " || " << _iOutHours << "  " << _iOutMin << "  " << _iOutSec << "  " << _iOutMiliSec << endl << buffer << endl;


		  myfile.getline(buffer,2048);
		  while ( buffer[0] != '\000'){
			  _iSubtitleLineCount++;
			  g_vecstrSubtitles.push_back(buffer);
			  myfile.getline(buffer,2048);
		  }
		  //cout << endl;
		  _ptTemp.z = _iSubtitleLineCount;
		  g_vecptInOutSubtitlesInMilisec.push_back(_ptTemp);

		}
		myfile.close();
	}
	else 
		MessageBox::Show("Unable to read subtitles file");
}

void makingXML( System::String^ _strXMLFile, int _iImageSubtitles ){

	unsigned int _uiInHours, _uiInMin, _uiInSec, _uiInMilisec;
	unsigned int _uiOutHours, _uiOutMin, _uiOutSec, _uiOutMilisec;
	unsigned int _uiTemp;
	unsigned int _uiSubtitlesLinesDrawn = 0;

	std::ofstream myfile;

	myfile.open(getPtrToCharFromSysString(_strXMLFile));

	if (myfile.is_open()){

		//CvFileStorage* _fsXML = cvOpenFileStorage(	getPtrToCharFromSysString(_strXMLFile),
		//											0,
		//											CV_STORAGE_WRITE);

		////start </DCSubtitle> struct
		myfile << "<?xml version=\"1.0\" encoding=\"UTF-8\"?><DCSubtitle Version=\"1.1\">" << "\n"
				<< "<SubtitleID>" << "1c93837c-d504-48bd-b54b-387036103799" << "</SubtitleID>" << "\n" 
				<< "<MovieTitle>" << g_strMovieName << "</MovieTitle>" << "\n"
				<< "<ReelNumber>" << "0" << "</ReelNumber>" << "\n"
				<< "<Language>" << g_strSubtitlesLanguage << "</Language>" << "\n";

		if (_iImageSubtitles == 0){
			myfile << "<LoadFont Id=\"" << g_strFontSubtitleName << "\" URI=\"" << g_strFontSubtitleName << ".ttf\" />\n";
			myfile << "<Font Id=\"" << g_strFontSubtitleName << "\" Color=\"ffffffff\" Effect=\"none\" EffectColor=\"ff000000\" Italic=\"no\" Script=\"normal\" Size=\"" << g_fFontSubtitleSize << "\" Underlined=\"no\" Weight=\"normal\" AspectAdjust=\"1\" Spacing=\"0em\">\n";
		}


			for (int i=0; i <= (g_vecptInOutSubtitlesInMilisec.size() - 1); i++){

				_uiInHours = cvFloor( g_vecptInOutSubtitlesInMilisec[i].x / (60*60*1000) );
				_uiTemp = cvRound(g_vecptInOutSubtitlesInMilisec[i].x) % (60*60*1000);
				_uiInMin = cvFloor( _uiTemp / (60*1000) );
				_uiTemp = _uiTemp % (60*1000);
				_uiInSec = cvFloor( _uiTemp / (1000) );
				_uiInMilisec = _uiTemp % (1000);

				_uiOutHours = cvFloor( g_vecptInOutSubtitlesInMilisec[i].z / (60*60*1000) );
				_uiTemp = cvRound(g_vecptInOutSubtitlesInMilisec[i].y) % (60*60*1000);
				_uiOutMin = cvFloor( _uiTemp / (60*1000) );
				_uiTemp = _uiTemp % (60*1000);
				_uiOutSec = cvFloor( _uiTemp / (1000) );
				_uiOutMilisec = _uiTemp % (1000);

				////start Subtitle struct
				myfile << (char*)(void*)Marshal::StringToHGlobalAnsi( "<Subtitle SpotNumber=\"" +
																		(i+1) +
																		"\" TimeIn=\"" +
																		_uiInHours + ":" + _uiInMin + ":" + _uiInSec + ":" + _uiInMilisec +
																		"\" TimeOut=\"" +
																		_uiOutHours + ":" + _uiOutMin + ":" + _uiOutSec + ":" + _uiOutMilisec +
																		"\" FadeUpTime=\"" + 0 +
																		"\" FadeDownTime=\"" + 0 +
																		"\">" + "\n");

					if (_iImageSubtitles == 1){
						////start Image struct
						myfile << (char*)(void*)Marshal::StringToHGlobalAnsi( "\t<Image HAlign=\"center\" VAlign=\"bottom\" VPosition=\"9.4\" ZPosition=\"" + g_vecptSubtitlesPositions[i].z + "\">")
								<< g_vecstrSubtitlesFileNamesPNGimages[i];


						////end - start image struct
						myfile << "</Image>" << "\n";
					}
					else{
						for (int ii=0; ii <= (g_vecptInOutSubtitlesInMilisec[i].z - 1); ii++){
							////start Text struct
							myfile << (char*)(void*)Marshal::StringToHGlobalAnsi( "\t<Text HPosition=\"0\" VAlign=\"bottom\" VPosition=\"10\" ZPosition=\"" + g_vecptSubtitlesPositions[i].z + "\">")
									<< g_vecstrSubtitles[_uiSubtitlesLinesDrawn];

							_uiSubtitlesLinesDrawn++;


							////end - start Text struct
							myfile << "</Text>" << "\n";
						}
					}
				
				//end - start Subtitle struct
				myfile << "</Subtitle>" << "\n";

			}

			if (_iImageSubtitles == 0){
				myfile << "</Font>\n";
			}

			//end - start </DCSubtitle> struct
			myfile << "</DCSubtitle>" << "\n";

		myfile.close();
	}//end if file.isopen
	else 
		MessageBox::Show("Unable to create XML file");

}



//void minMaxFind(IplImage *_I, double *_dMin, double *_dMax){
//	double _dTemp;
//	//double *_dTempWsk = &_dTemp;
//
//	*_dMax = cvGetReal2D(_I, 0, 0);
//	*_dMin = *_dMax;
//
//	for (int ii=0; ii <= _I->height-1; ii++){
//		for (int jj=0; jj <= _I->width-1; jj++){
//			//_dTemp = static_cast<double>(((uchar*)(_I->imageData + ii *_I->widthStep))[jj *_I->nChannels + 0]);
//			_dTemp = cvGetReal2D(_I, ii, jj);
//
//			if (_dTemp < *_dMin)
//				*_dMin = _dTemp;
//
//			if (_dTemp > *_dMax)
//				*_dMax = _dTemp;
//		}
//	}
//}


void startStereo(array<String^>^ _strArrayFilesDirsLeft, array<String^>^ _strArrayFilesDirsRight, System::String^ _strSaveToFolder, CvStereoBMState *_stereoBMState){
	char* _cFileName;
	char* _cFileNameSave;
	System::String^ _strFileNameTempToWrite;
	System::String^ _strFileNameTempToRead;
	array<Char>^_cArraySeparator = gcnew array<Char>{'\\'};
	array<Char>^_cArraySeparatorDot = gcnew array<Char>{'.'};
	array<System::String^>^_strArraySplitedDir;
	array<System::String^>^ _strArraySplitedNameTemp;

	int _iSubtitlesFullDrawn = 0;
	int _iSubtitlesLinesDrawn = 0;
	double _dMaxDisparityInSubtitles = 0;
	double _dMaxDisparityInSubtitlesTemp = 0;


	g_iFrameCount = 0;
	int _lastIndex;
	int a;
	
	double _dArrayMinElement;
	double _dArrayMaxElement;
	double *_dArrayMinElementWsk = &_dArrayMinElement;
	double *_dArrayMaxElementWsk = &_dArrayMaxElement;

	bool _bIfNextSubtitleToDraw = 1;



	if ((1 <= _strArrayFilesDirsLeft->Length) && (1 <= _strArrayFilesDirsRight->Length)){

		if (_strArrayFilesDirsLeft->Length == _strArrayFilesDirsRight->Length){

			

			//getting pointer to char* to cvLoadImage
			_strArraySplitedDir = _strArrayFilesDirsLeft[0]->ToString()->Split( _cArraySeparator, StringSplitOptions::RemoveEmptyEntries );

			_lastIndex = _strArraySplitedDir->Length;
			_strFileNameTempToRead = _strArraySplitedDir[_lastIndex-1]->ToString();
			_strArraySplitedNameTemp = _strFileNameTempToRead->ToString()->Split( _cArraySeparatorDot, StringSplitOptions::RemoveEmptyEntries );
			_lastIndex = _strArraySplitedNameTemp->Length;
			_strFileNameTempToRead = _strArraySplitedNameTemp[_lastIndex-1]->ToString();

			_cFileName = (char*)(void*)Marshal::StringToHGlobalAnsi(String::Join("/", _strArraySplitedDir));
			
			if (_strFileNameTempToRead->ToString() == "dpx"){
				Ileft = cvCreateImage( DpxSize(_cFileName), IPL_DEPTH_8U, 3 );
			}
			if ( (_strFileNameTempToRead->ToString() == "png") || (_strFileNameTempToRead->ToString() == "jpg") || (_strFileNameTempToRead->ToString() == "jpeg") || (_strFileNameTempToRead->ToString() == "bmp") ){
				Ileft = cvLoadImage(_cFileName);
			}

			_strArraySplitedDir = _strArrayFilesDirsRight[0]->ToString()->Split( _cArraySeparator, StringSplitOptions::RemoveEmptyEntries );
			_cFileName = (char*)(void*)Marshal::StringToHGlobalAnsi(String::Join("/", _strArraySplitedDir));
			
			if (_strFileNameTempToRead->ToString() == "dpx"){
				Iright = cvCreateImage( DpxSize(_cFileName), IPL_DEPTH_8U, 3 );
			}
			if ( (_strFileNameTempToRead->ToString() == "png") || (_strFileNameTempToRead->ToString() == "jpg") || (_strFileNameTempToRead->ToString() == "jpeg") || (_strFileNameTempToRead->ToString() == "bmp") ){
				Iright = cvLoadImage(_cFileName);
			}
			

			if (Iright->nSize == Ileft->nSize){


				if (g_iTimesToHalfsize == 0)
					AllocateImages(cvSize(Ileft->width,Ileft->height));
				else
					AllocateImages(cvSize(cvRound(Ileft->width/(g_iTimesToHalfsize)),cvRound(Ileft->height/(g_iTimesToHalfsize))));

				cvNamedWindow("Distance map ('depth')", CV_WINDOW_AUTOSIZE);
				cvNamedWindow("Stereo left", CV_WINDOW_AUTOSIZE);
				cvNamedWindow("Stereo right", CV_WINDOW_AUTOSIZE);
				

				//CvStereoBMState *BMState = cvCreateStereoBMState();
				CvStereoGCState* GCState = cvCreateStereoGCState( g_iSearchLenghtDisparity,  g_iMaxIterations);

				if (!g_bAutoSetupBMState){
					_stereoBMState->minDisparity = g_iMinDisparity;
					_stereoBMState->numberOfDisparities = g_iSearchLenghtDisparity;
					_stereoBMState->preFilterSize = g_iPrefilterIntensitySize;
					_stereoBMState->SADWindowSize = g_iBlockSize;
					_stereoBMState->speckleRange = g_iSpeckleRange;
					_stereoBMState->speckleWindowSize = g_iSpeckleWindowSize;
					_stereoBMState->textureThreshold = g_iTextureThreshold;
					_stereoBMState->uniquenessRatio = g_iUniquenessRatio;
					//BMState->preFilterSize=41;
					//BMState->preFilterCap=31;
					//BMState->SADWindowSize=41;
					//BMState->minDisparity=-64;
					//BMState->numberOfDisparities=128;
					//BMState->textureThreshold=10;
					//BMState->uniquenessRatio=15;


					//GCState
					//GCState->K = g_iKparameter;
					//GCState->interactionRadius = g_iInteractionRadius;
					//GCState->Ithreshold = g_iIthreshold;
					//GCState->maxIters = g_iMaxIterations;
					//GCState->numberOfDisparities = g_iSearchLenghtDisparity;
					
				}


				for (g_iFrameCount=0; g_iFrameCount<=_strArrayFilesDirsLeft->Length-1; g_iFrameCount++){

					//checking states
					
					if (g_bPauseComputing)
						a = cvWaitKey(10000);
					if ((g_bExitProgram) || (g_bStopComputing))
						break;

					////computing not more then are subtitles
					if ( _iSubtitlesFullDrawn <= (g_vecptInOutSubtitlesInMilisec.size() - 1) ){

						////comuting disparities only where are subtitles
						if (( cvFloor(g_vecptInOutSubtitlesInMilisec[_iSubtitlesFullDrawn].x *double(g_uiMovieFrameRate/1000.f)) <= g_iFrameCount) && ( cvFloor(g_vecptInOutSubtitlesInMilisec[_iSubtitlesFullDrawn].y*double(g_uiMovieFrameRate/1000.f)) >= g_iFrameCount)){	//0.025 -> 25fps


							////refreshing gcstate parameters
							//GCState->K = g_iKparameter;
							//GCState->interactionRadius = g_iInteractionRadius;
							//GCState->Ithreshold = g_iIthreshold;
							//GCState->maxIters = g_iMaxIterations;
							//GCState->numberOfDisparities = g_iSearchLenghtDisparity;

							//getting pointer to char* to cvLoadImage
							_strArraySplitedDir = _strArrayFilesDirsLeft[g_iFrameCount]->ToString()->Split( _cArraySeparator, StringSplitOptions::RemoveEmptyEntries );
							_cFileName = (char*)(void*)Marshal::StringToHGlobalAnsi(String::Join("/", _strArraySplitedDir));
							
							if (_strFileNameTempToRead->ToString() == "dpx"){
								Ileft = cvCreateImage( DpxSize(_cFileName), IPL_DEPTH_8U, 3 );
							}
							if ( (_strFileNameTempToRead->ToString() == "png") || (_strFileNameTempToRead->ToString() == "jpg") || (_strFileNameTempToRead->ToString() == "jpeg") ){
								Ileft = cvLoadImage(_cFileName);
							}

							_strArraySplitedDir = _strArrayFilesDirsRight[g_iFrameCount]->ToString()->Split( _cArraySeparator, StringSplitOptions::RemoveEmptyEntries );
							_cFileName = (char*)(void*)Marshal::StringToHGlobalAnsi(String::Join("/", _strArraySplitedDir));
							
							if (_strFileNameTempToRead->ToString() == "dpx"){
								Iright = cvCreateImage( DpxSize(_cFileName), IPL_DEPTH_8U, 3 );
							}
							if ( (_strFileNameTempToRead->ToString() == "png") || (_strFileNameTempToRead->ToString() == "jpg") || (_strFileNameTempToRead->ToString() == "jpeg") ){
								Iright = cvLoadImage(_cFileName);
							}

							cvZero( IdownsampledLeft_8u );
							cvZero( IdownsampledRight_8u );

							cvResize(Ileft,IdownsampledLeft_8u, CV_INTER_LINEAR);
							if (g_bSegmentation)
								cvPyrMeanShiftFiltering(IdownsampledLeft_8u, IdownsampledLeft_8u, g_iSegmentationSpatialRadial, g_iSegmentationColorRadial, 3, cvTermCriteria(CV_TERMCRIT_ITER,5,1));
							cvCvtColor(IdownsampledLeft_8u, IdownsampledLeft1_8u, CV_BGR2GRAY);

							cvResize(Iright,IdownsampledRight_8u, CV_INTER_LINEAR);
							if (g_bSegmentation)
								cvPyrMeanShiftFiltering(IdownsampledRight_8u, IdownsampledRight_8u, g_iSegmentationSpatialRadial, g_iSegmentationColorRadial, 3, cvTermCriteria(CV_TERMCRIT_ITER,5,1));
							
							cvCvtColor(IdownsampledRight_8u, IdownsampledRight1_8u, CV_BGR2GRAY);

							if (g_bMedian){
								cvSmooth(IdownsampledLeft1_8u, IdownsampledLeft1_8u, CV_MEDIAN, g_iFilterSize, g_iFilterSize, NULL, NULL);
								cvSmooth(IdownsampledRight1_8u, IdownsampledRight1_8u, CV_MEDIAN, g_iFilterSize, g_iFilterSize, NULL, NULL);
							}
							if (g_bGaussianBlur){
								cvSmooth(IdownsampledLeft1_8u, IdownsampledLeft1_8u, CV_GAUSSIAN, g_iFilterSize, g_iFilterSize, NULL, NULL);
								cvSmooth(IdownsampledRight1_8u, IdownsampledRight1_8u, CV_GAUSSIAN, g_iFilterSize, g_iFilterSize, NULL, NULL);
							}

							cvZero(IdownsampledDisparityMap_16s);

							cvFindStereoCorrespondenceBM(IdownsampledLeft1_8u, IdownsampledRight1_8u, IdownsampledDisparityMap_16s, _stereoBMState);
							//cvFindStereoCorrespondenceGC(IdownsampledLeft1_8u, IdownsampledRight1_8u, IdownsampledDisparityMapLeft_16s, IdownsampledDisparityMapRight_16s, GCState, 0);

							cvConvertScale( IdownsampledDisparityMap_16s, IdownsampledDisparityMap_32f, 1, 0 );
							cvMinMaxLoc(IdownsampledDisparityMap_16s, _dArrayMinElementWsk, _dArrayMaxElementWsk); //, NULL, NULL, NULL);
							_dMaxDisparityInSubtitlesTemp = double(*_dArrayMaxElementWsk)/double(16);

							//minMaxFind(IdownsampledDisparityMap_16s, _dArrayMinElementWsk, _dArrayMaxElementWsk);


							if (_bIfNextSubtitleToDraw){
								drawInStereoStuff( _dMaxDisparityInSubtitlesTemp, Ileft, Iright, double(double(Ileft->width)/double(IdownsampledLeft_8u->width)), _iSubtitlesLinesDrawn, g_vecptInOutSubtitlesInMilisec[_iSubtitlesFullDrawn].z);
								_bIfNextSubtitleToDraw = 0;
							}


							//cvConvertScale( IdownsampledDisparityMapLeft_16s, IdownsampledDisparityMapLeft_8u, -16 );
							//cvNormalize(IdownsampledDisparityMapLeft_16s, IdownsampledDisparityMapLeft_8u, 0, 255, CV_MINMAX, NULL);

							//cvMinMaxLoc(IdownsampledDisparityMap_16s, _dArrayMinElement, _dArrayMaxElement, NULL, NULL, NULL);
							cvConvertScale( IdownsampledDisparityMap_16s, IdownsampledDisparityMap_8u, 1, 16 );
							//cvNormalize(IdownsampledDisparityMap_16s, IdownsampledDisparityMap_8u, 0, 255, CV_MINMAX, NULL);


							if (g_bCheckboxStereoLeft) 
								cvShowImage("Stereo left", IdownsampledLeft1_8u);	
							else
								cvDestroyWindow("Stereo left");

							if (g_bCheckboxStereoRight) 
								cvShowImage("Stereo right", IdownsampledRight1_8u);
							else
								cvDestroyWindow("Stereo right");

							if (g_bCheckboxDisparityMap) 
								cvShowImage("Distance map ('depth')", IdownsampledDisparityMap_8u);
							else
								cvDestroyWindow("Distance map ('depth')");

							
							//SAVING
							//getting pointer to *char to cvSaveImage				
							_strArraySplitedDir = _strArrayFilesDirsLeft[g_iFrameCount]->ToString()->Split( _cArraySeparator, StringSplitOptions::RemoveEmptyEntries );

							// writing to file
							_lastIndex = _strArraySplitedDir->Length;
							_strFileNameTempToWrite = _strArraySplitedDir[_lastIndex-1]->ToString();
							_strArraySplitedNameTemp = _strFileNameTempToWrite->ToString()->Split( _cArraySeparatorDot, StringSplitOptions::RemoveEmptyEntries );
							_strFileNameTempToWrite = _strArraySplitedNameTemp[0]->ToString();

							if (g_bProgramTesting){
								_cFileNameSave = (char*)(void*)Marshal::StringToHGlobalAnsi(_strSaveToFolder + "/z_" + _strFileNameTempToWrite + ".png");
								cvSaveImage( _cFileNameSave, IdownsampledDisparityMap_8u);
								//_cFileNameSave = (char*)(void*)Marshal::StringToHGlobalAnsi(_strSaveToFolder + "/_" + _strFileNameTempToWrite + ".txt");
								//cvSave( _cFileNameSave, IdownsampledDisparityMap_16s);

							}

							if (g_iSubtitlesImage == -1){
								_cFileNameSave = (char*)(void*)Marshal::StringToHGlobalAnsi(_strSaveToFolder + "/l_" + _strFileNameTempToWrite + ".png");
								cvSaveImage( _cFileNameSave, Ileft);

								_cFileNameSave = (char*)(void*)Marshal::StringToHGlobalAnsi(_strSaveToFolder + "/r_" + _strFileNameTempToWrite + ".png");
								cvSaveImage( _cFileNameSave, Iright);
							}



							////searching for max disparity in mark IN-OUT subtitles
								if (_dMaxDisparityInSubtitles <= _dMaxDisparityInSubtitlesTemp){
									_dMaxDisparityInSubtitles = _dMaxDisparityInSubtitlesTemp;
								}

								//when frames achive OUT in actual subtitles then subtitles count is incremeant by 1 for next subtitles 
								//AND also we are drawing image with subtitles
								if ( cvFloor(g_vecptInOutSubtitlesInMilisec[_iSubtitlesFullDrawn].y*double(g_uiMovieFrameRate/1000.f)) == g_iFrameCount){

									CvPoint3D64f _ptTemp;	//for filling positions
									double _dMaxDisparityInSubtitlesPercentOfWidth;

									_dMaxDisparityInSubtitlesPercentOfWidth = (_dMaxDisparityInSubtitles * 100.f) / double(Ileft->width);

									_ptTemp.x = 0;
									_ptTemp.y = 0;
									_ptTemp.z = double(_dMaxDisparityInSubtitlesPercentOfWidth + g_fShiftFactorForDepth) * double(g_fScaleFactorForDepth);	//to adjust Z-position in clipster


									if (g_iSubtitlesImage == 1){
										drawSubtitlesImage(	
															g_vecstrSubtitles, 
															g_vecptInOutSubtitlesInMilisec[_iSubtitlesFullDrawn].z, 
															_iSubtitlesLinesDrawn, 
															(_strSaveToFolder + "/_subs" + _strFileNameTempToWrite + ".bmp"),
															(_strSaveToFolder + "/_subs" + _strFileNameTempToWrite + ".png"),
															("_subs" + _strFileNameTempToWrite + ".png")

														   );//->Save( Response.OutputStream, System.Drawing.Imaging.ImageFormat.Gif );
									}
									
									////filling positions of subtitles
										g_vecptSubtitlesPositions.push_back(_ptTemp);
									//end - filling positions of subtitles

									////reset _dMaxDisparityInSubtitles for next subtitles
										_dMaxDisparityInSubtitles = 0;

									_iSubtitlesFullDrawn++;
									_bIfNextSubtitleToDraw = 1;
								}
							////end
							
							cvReleaseImage(&Ileft);
							cvReleaseImage(&Iright);

							

							a = cvWaitKey(10);

						}//comuting disparities only where are subtitles

					}//computing not more then are subtitles
					
				}//end - main for loop

				if ( (g_iSubtitlesImage == 1) || (g_iSubtitlesImage == 0) ){
					makingXML( _strSaveToFolder + "/_subs_" + (gcnew System::String(g_strMovieName.c_str())) + ".xml", g_iSubtitlesImage );
				}

				//cvDestroyAllWindows();
				cvReleaseStereoGCState(&GCState);
				DeallocateImages();


			}
			else
				MessageBox::Show("Image sizes of left and right sequence are not the same");
		}
		else
			MessageBox::Show("Number of files in left and right sequence are not equal");
	}
	else
		MessageBox::Show("There is no sequence left and/or right");



}



void previewRefreshStereo(array<System::String^>^ _strArrayFilesDirs){

	//if (g_bPreview){

	//	char _cFileNameSave;
	//	System::String^ _strFileNameTemp;
	//	array<Char>^_cArraySeparator = gcnew array<Char>{'\\'};
	//	

	//	if (_strArrayFilesDirs->Length>=2){

	//		//getting pointer to char* to cvLoadImage
	//		array<System::String^>^_strArraySplitedDir = _strArrayFilesDirs[0]->ToString()->Split( _cArraySeparator, StringSplitOptions::RemoveEmptyEntries );
	//		char* _cFileName = (char*)(void*)Marshal::StringToHGlobalAnsi(String::Join("/", _strArraySplitedDir));
	//		Ipreview = cvLoadImage(_cFileName);

	//		if (g_bTimesToHalfsizeToRefresh){
	//			if (g_iTimesToHalfsize == 0){
	//				IdownsampledPreview_8u = cvCreateImage( cvSize(Ipreview->width,Ipreview->height), IPL_DEPTH_8U, 3 );
	//				IerodeHowPreview_8u = cvCreateImage( cvSize(Ipreview->width,Ipreview->height), IPL_DEPTH_8U, 3 );
	//			}
	//			else{
	//				IdownsampledPreview_8u = cvCreateImage( cvSize(cvRound(Ipreview->width/(g_iTimesToHalfsize)),cvRound(Ipreview->height/(g_iTimesToHalfsize))), IPL_DEPTH_8U, 3 );
	//				IerodeHowPreview_8u = cvCreateImage( cvSize(cvRound(Ipreview->width/(g_iTimesToHalfsize)),cvRound(Ipreview->height/(g_iTimesToHalfsize))), IPL_DEPTH_8U, 3 );
	//			}

	//			cvZero( IerodeHowPreview_8u );
	//			cvZero( IdownsampledPreview_8u );
	//			cvResize(Ipreview,IdownsampledPreview_8u, CV_INTER_NN);
	//		}

	//		if (g_bGaussianBlur){
	//			cvSmooth(IdownsampledPreview_8u, IdownsampledPreview_8u, CV_GAUSSIAN, g_iFilterSize, g_iFilterSize, NULL, NULL);
	//			//g_bGaussianBlurToRefresh = 0;
	//		}
	//		if (g_bMedian){
	//			cvSmooth(IdownsampledPreview_8u, IdownsampledPreview_8u, CV_MEDIAN, g_iFilterSize, g_iFilterSize, NULL, NULL);
	//			//g_bMedianToRefresh = 0;
	//		}

	//		if (g_bBlockSizeToRefresh)
	//			cvRectangle(IdownsampledPreview_8u, 
	//						cvPoint(0, 0),
	//						cvPoint(g_iBlockSize, g_iBlockSize),
	//						cvScalar(0, 255, 0),
	//						CV_FILLED,
	//						8,
	//						0);

	//		if (g_bMaxRangeToRefresh)
	//			cvRectangle(IdownsampledPreview_8u, 
	//						cvPoint(0, 0),
	//						cvPoint(g_iMaxRange, g_iMaxRange),
	//						cvScalar(255, 0, 0),
	//						2,
	//						8,
	//						0);

	//		if (g_bVelocityThresholdToRefresh)
	//			cvLine(IdownsampledPreview_8u,
	//					cvPoint(0, 0),
	//					cvPoint(cvRound(g_iVelocityThreshold/sqrt(2.0)), cvRound(g_iVelocityThreshold/sqrt(2.0))),
	//					cvScalar(0, 0, 255),
	//					1,
	//					8,
	//					0);

	//		}


	//		cvShowImage("Preview", IdownsampledPreview_8u);
	//		cvReleaseImage( &IerodeHowPreview_8u );
	//		cvReleaseImage( &IdownsampledPreview_8u );

	//	}
	//}
}
