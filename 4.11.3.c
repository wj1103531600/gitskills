#if !defined(HDR)
#define HDR

/* hdr.h�ļ������� */

#endif


#if system == sysv
#define HDR "sysv.h"
#elif system == BSD
#define HDR "bsd.h"
#elif system == msdos
#define HDR "msdos.h"
#else
#define HDR "default.h"
#endif
#include HDR

#ifdef HDR
#define HDR
/* hdr.h�ļ������� */

#endif