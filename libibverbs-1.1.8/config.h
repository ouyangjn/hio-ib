/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define to 1 if you have the declaration of `O_CLOEXEC', and to 0 if you
   don't. */
#define HAVE_DECL_O_CLOEXEC 1

/* Define to 1 if you have the declaration of `SOCK_CLOEXEC', and to 0 if you
   don't. */
#define HAVE_DECL_SOCK_CLOEXEC 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `dl' library (-ldl). */
#define HAVE_LIBDL 1

/* Define to 1 if you have the `nl' library (-lnl). */
#define HAVE_LIBNL 1

/* Use libnl-1 */
/* #undef HAVE_LIBNL1 */

/* Use libnl-3.0 */
#define HAVE_LIBNL3 1

/* Define to 1 if you have the `pthread' library (-lpthread). */
#define HAVE_LIBPTHREAD 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* assembler has .symver support */
#define HAVE_SYMVER_SUPPORT 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <valgrind/memcheck.h> header file. */
#define HAVE_VALGRIND_MEMCHECK_H 1

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Define to 1 to disable resovle neigh annotations. */
/* #undef NRESOLVE_NEIGH */

/* Define to 1 to disable Valgrind annotations. */
/* #undef NVALGRIND */

/* Defined to 0 if not provided */
/* #undef O_CLOEXEC */

/* Name of package */
#define PACKAGE "libibverbs"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "linux-rdma@vger.kernel.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "libibverbs"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "libibverbs 1.1.8"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "libibverbs"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.1.8"

/* Defined to 0 if not provided */
/* #undef SOCK_CLOEXEC */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* fopen() modifier for setting close on exec flag */
#define STREAM_CLOEXEC "e"

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Version number of package */
#define VERSION "1.1.8"

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */
