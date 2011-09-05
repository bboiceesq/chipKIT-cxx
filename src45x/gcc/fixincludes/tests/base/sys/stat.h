/*  DO NOT EDIT THIS FILE.

    It has been auto-edited by fixincludes from:

	"fixinc/tests/inc/sys/stat.h"

    This had to be done to correct non-standard usages in the
    original, manufacturer supplied header file.  */



#if defined( ALPHA___EXTERN_PREFIX_SYS_STAT_CHECK )
#   if defined(__DECC) || defined(__PRAGMA_EXTERN_PREFIX)
#endif  /* ALPHA___EXTERN_PREFIX_SYS_STAT_CHECK */


#if defined( GLIBC_C99_INLINE_2_CHECK )
#ifdef __GNUC_GNU_INLINE__
extern
#endif
__inline__ int fstat64 (int __fd, struct stat64 *__buf) __THROW __nonnull ((2));
#ifdef __GNUC_GNU_INLINE__
extern
#endif
__inline__ int
__NTH (fstat64 (int __fd, struct stat64 *__statbuf))
{}
#endif  /* GLIBC_C99_INLINE_2_CHECK */


#if defined( RS6000_FCHMOD_CHECK )
extern int fchmod(int, mode_t);
#endif  /* RS6000_FCHMOD_CHECK */


#if defined( VXWORKS_NEEDS_VXWORKS_CHECK )
#include </dev/null> /* ULONG */
# define	__INCstath <sys/stat.h>
#include <types/vxTypesOld.h>
#endif  /* VXWORKS_NEEDS_VXWORKS_CHECK */