using namespace System;

#ifndef _STEREOSUBS_H
#define	_STEREOSUBS_H

void startStereo(array<String^>^ entriesLeft, array<String^>^ entriesRight, System::String^ _strSaveToFolder, CvStereoBMState *_stereoBMState);
void previewRefreshStereo(array<System::String^>^ _strArrayFilesDirs);
void getTimecodesAndSubtitles ( System::String^ _strSubtitlesFile);
std::string convertSysStrToStdStr( System::String ^ s );

#endif	/* _STEREOSUBS_H */

