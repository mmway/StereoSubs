//using namespace System;

#ifndef _DPXSTUFF_H
#define	_DPXSTUFF_H

CvSize DpxSize(char *_cFileNameDpx);
void DpxToIplImage(char *_cFileNameDpx, IplImage *_I, uchar *_ImageData);

#endif	/* _DPXSTUFF_H */