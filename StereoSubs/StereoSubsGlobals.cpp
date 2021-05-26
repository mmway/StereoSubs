#include "stdafx.h"
#include "cv.h"
#include "string.h"
#include <vector>

using namespace System;
using namespace System::Drawing;




int g_iBlockSize, g_iTimesToHalfsize, g_iFilterSize, g_iPrefilterIntensitySize, g_iMinDisparity, g_iSearchLenghtDisparity, g_iTextureThreshold, g_iUniquenessRatio, g_iSpeckleWindowSize, g_iSpeckleRange, g_iSegmentationColorRadial, g_iSegmentationSpatialRadial;
int g_iCameraLensType;
int g_iKparameter, g_iIthreshold, g_iMaxIterations, g_iInteractionRadius;

int g_iFrameCount = 0;


bool g_bCheckboxStereoLeft, g_bCheckboxStereoRight, g_bCheckboxDisparityMap;
bool g_bAutoSetupBMState;
bool g_bExitProgram;
bool g_bStopComputing;
bool g_bPauseComputing;
bool g_bPreview;
bool g_bBlockSizeToRefresh, g_bTimesToHalfsizeToRefresh, g_bPrefilterIntensitySizeToRefresh, g_bFilterSizeToRefresh, g_bMinDisparityToRefresh, g_bSearchLenghtDisparityToRefresh, g_bSpeckleWindowSizeToRefresh, g_bGaussianBlurToRefresh, g_bMedianToRefresh, g_bSegmentationToRefresh;
bool g_bMedian, g_bGaussianBlur, g_bSegmentation;


std::vector<CvPoint3D64f> g_vecptInOutSubtitlesInMilisec;		//x - IN marker;    y - OUT marker;    z - amount of subtitles lines in full subtitle
std::vector<CvPoint3D64f> g_vecptSubtitlesPositions;			//x - width position;    y - height positions;    z - depth of subtitles
std::vector<std::string> g_vecstrSubtitles;						//line after line of subtitles 
std::vector<std::string> g_vecstrSubtitlesFileNamesPNGimages;	//names of subtitles PNG images

std::string g_strMovieName;
std::string g_strSubtitlesLanguage;

//subitle font parameters
	std::string g_strFontSubtitleName;
	float g_fFontSubtitleSize;
	unsigned int g_uiFontSubtitleBorder;
//end

float g_fShiftFactorForDepth;
float g_fScaleFactorForDepth;

unsigned int g_uiMovieFrameRate;

int g_iSubtitlesImage;
bool g_bProgramTesting;


CvStereoBMState *m_stereoBMState;
