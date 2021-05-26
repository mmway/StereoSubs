#include "stdafx.h"
#include "Form1.h"

#include "cv.h"

#include <iostream>	//for binary file reading
#include <fstream>

using namespace StereoSubs;

CvSize DpxSize(char *_cFileNameDpx){

		//CONVERT FROM DPX TO IplImage
		FILE *strumien;

		//image info
		unsigned int _uiDpxHeight = 0, _uiDpxWidth = 0;

		if (!((strumien = fopen(_cFileNameDpx, "rb")) == NULL)){
			
			fseek(strumien,772,SEEK_SET);
			fread(&_uiDpxWidth,4,1,strumien);
			_uiDpxWidth = ((_uiDpxWidth>>24) | ((_uiDpxWidth<<8) & 0x00FF0000) | ((_uiDpxWidth>>8) & 0x0000FF00) | (_uiDpxWidth<<24));
			
			fseek(strumien,776,SEEK_SET);
			fread(&_uiDpxHeight,4,1,strumien);
			_uiDpxHeight = ((_uiDpxHeight>>24) | ((_uiDpxHeight<<8) & 0x00FF0000) | ((_uiDpxHeight>>8) & 0x0000FF00) | (_uiDpxHeight<<24));

			fclose(strumien);
			return (cvSize(_uiDpxWidth, _uiDpxHeight));
		}
		else{
			MessageBox::Show("Unable to open some file");
			return (cvSize(0,0));
		}


}



void DpxToIplImage(char *_cFileNameDpx, IplImage *_I, uchar *_ImageData){

	//CONVERT FROM DPX TO IplImage
	FILE *strumien;

	//image info
	unsigned int _uiDpxHeight = 0, _uiDpxWidth = 0;
	unsigned int _uiDpxDataStart = 0;
	unsigned int _uiDpxPixel = 0;
	unsigned int _uiDpxPixelR = 0, _uiDpxPixelG = 0, _uiDpxPixelB = 0;


	int _iImageConvertedWidthCount = 0, _iImageConvertedHeightCount = 0;

	if (!((strumien = fopen(_cFileNameDpx, "rb")) == NULL)){
		
		fseek(strumien,4,SEEK_SET);
		fread(&_uiDpxDataStart,4,1,strumien);
		_uiDpxDataStart = ((_uiDpxDataStart>>24) | ((_uiDpxDataStart<<8) & 0x00FF0000) | ((_uiDpxDataStart>>8) & 0x0000FF00) | (_uiDpxDataStart<<24));
		
		fseek(strumien,772,SEEK_SET);
		fread(&_uiDpxWidth,4,1,strumien);
		_uiDpxWidth = ((_uiDpxWidth>>24) | ((_uiDpxWidth<<8) & 0x00FF0000) | ((_uiDpxWidth>>8) & 0x0000FF00) | (_uiDpxWidth<<24));
		
		fseek(strumien,776,SEEK_SET);
		fread(&_uiDpxHeight,4,1,strumien);
		_uiDpxHeight = ((_uiDpxHeight>>24) | ((_uiDpxHeight<<8) & 0x00FF0000) | ((_uiDpxHeight>>8) & 0x0000FF00) | (_uiDpxHeight<<24));

		//I = cvCreateImage( cvSize(_uiDpxWidth, _uiDpxHeight), IPL_DEPTH_8U, 3 );
		//cvZero(I);

		////setup the pointer to access image data
		//uchar *_ImageData = ( uchar* ) I->imageData;    

		
		for (unsigned int i=_uiDpxDataStart; i<=((_uiDpxHeight*_uiDpxWidth*4)+_uiDpxDataStart); i = i+4){


			fseek(strumien,i,SEEK_SET);
			fread(&_uiDpxPixel,4,1,strumien);
			_uiDpxPixel = ((_uiDpxPixel>>24) | ((_uiDpxPixel<<8) & 0x00FF0000) | ((_uiDpxPixel>>8) & 0x0000FF00) | (_uiDpxPixel<<24));

			_uiDpxPixelR = (_uiDpxPixel & 0xFFC00000) >> 22;
			_uiDpxPixelG = (_uiDpxPixel & 0x3FF000) >> 12;
			_uiDpxPixelB = (_uiDpxPixel & 0xFFC) >> 2;

			//Convert to 8u
			_uiDpxPixelR = _uiDpxPixelR*256/1024;
			_uiDpxPixelG = _uiDpxPixelG*256/1024;
			_uiDpxPixelB = _uiDpxPixelB*256/1024;

			//for 8-bit images
			////_uiDpxPixel = _uiDpxPixel >> 22;
			//_uiDpxPixelR = (_uiDpxPixel & 0x000000FF);
			////_uiDpxPixel = _uiDpxPixel >> 12;
			//_uiDpxPixelG = (_uiDpxPixel & 0x0000FF00)/256;
			////_uiDpxPixel = _uiDpxPixel >> 2;
			//_uiDpxPixelB = (_uiDpxPixel & 0x00FF0000)/256/256;


			//((uchar*)(I->imageData + _iImageConvertedHeightCount *I->widthStep))[_iImageConvertedWidthCount *I->nChannels + 0] = _uiDpxPixelB;
			//((uchar*)(I->imageData + _iImageConvertedHeightCount *I->widthStep))[_iImageConvertedWidthCount *I->nChannels + 1] = _uiDpxPixelG;
			//((uchar*)(I->imageData + _iImageConvertedHeightCount *I->widthStep))[_iImageConvertedWidthCount *I->nChannels + 2] = _uiDpxPixelR;
			_ImageData[ _iImageConvertedHeightCount * _I->widthStep + _iImageConvertedWidthCount * _I->nChannels + 0] = _uiDpxPixelB;
			_ImageData[ _iImageConvertedHeightCount * _I->widthStep + _iImageConvertedWidthCount * _I->nChannels + 1] = _uiDpxPixelG;
			_ImageData[ _iImageConvertedHeightCount * _I->widthStep + _iImageConvertedWidthCount * _I->nChannels + 2] = _uiDpxPixelR;
			
			if ((_iImageConvertedWidthCount % (_I->width-1) == 0) && (_iImageConvertedWidthCount > 0)){
				_iImageConvertedHeightCount++;
				_iImageConvertedWidthCount = 0;
			}
			else
				_iImageConvertedWidthCount++;
			if ( i==((_uiDpxHeight*_uiDpxWidth*4)+_uiDpxDataStart))
				_iImageConvertedWidthCount = _iImageConvertedWidthCount;
		}

		fclose(strumien);
	}
	else
		MessageBox::Show("Unable to open some file");

}