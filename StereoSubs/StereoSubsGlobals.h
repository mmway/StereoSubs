#include "stdafx.h"

#ifndef _STEREOSUBSGLOBALS_H
#define _STEREOSUBSGLOBALS_H

	extern int g_iBlockSize, g_iTimesToHalfsize, g_iFilterSize, g_iPrefilterIntensitySize, g_iMinDisparity, g_iSearchLenghtDisparity, g_iTextureThreshold, g_iUniquenessRatio, g_iSpeckleWindowSize, g_iSpeckleRange, g_iSegmentationColorRadial, g_iSegmentationSpatialRadial;
	extern int g_iCameraLensType;
	extern int g_iKparameter, g_iIthreshold, g_iMaxIterations, g_iInteractionRadius;

	extern int g_iFrameCount;


	extern bool g_bCheckboxStereoLeft, g_bCheckboxStereoRight, g_bCheckboxDisparityMap;
	extern bool g_bAutoSetupBMState;
	extern bool g_bExitProgram;
	extern bool g_bStopComputing;
	extern bool g_bPauseComputing;
	extern bool g_bPreview;
	extern bool g_bBlockSizeToRefresh, g_bBlockSizeToRefresh, g_bTimesToHalfsizeToRefresh, g_bPrefilterIntensitySizeToRefresh, g_bFilterSizeToRefresh, g_bMinDisparityToRefresh, g_bSearchLenghtDisparityToRefresh, g_bSpeckleWindowSizeToRefresh, g_bGaussianBlurToRefresh, g_bMedianToRefresh, g_bSegmentationToRefresh;
	extern bool g_bMedian, g_bGaussianBlur, g_bSegmentation;


	extern std::vector<CvPoint3D64f> g_vecptInOutSubtitlesInMilisec;		//x - IN marker;    y - OUT marker;    z - amount of subtitles lines in full subtitle
	extern std::vector<CvPoint3D64f> g_vecptSubtitlesPositions;				//x - width position;    y - height positions;    z - depth of subtitles
	extern std::vector<std::string> g_vecstrSubtitles;						//line after line of subtitles 
	extern std::vector<std::string> g_vecstrSubtitlesFileNamesPNGimages;	//names of subtitles PNG images

	extern std::string g_strMovieName;
	extern std::string g_strSubtitlesLanguage;

	//subitle font parameters
		extern std::string g_strFontSubtitleName;
		extern float g_fFontSubtitleSize;
		extern unsigned int g_uiFontSubtitleBorder;
	//end

	extern float g_fShiftFactorForDepth;
	extern float g_fScaleFactorForDepth;

	extern unsigned int g_uiMovieFrameRate;

	extern int g_iSubtitlesImage;
	extern bool g_bProgramTesting;
	
	extern CvStereoBMState *m_stereoBMState;



#endif