/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.in by autoheader.  */
/*
 * Copyright (C) 2004, 2005, 2007, 2008, 2012, 2014  Internet Systems Consortium, Inc. ("ISC")
 * Copyright (C) 1999-2003  Internet Software Consortium.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND ISC DISCLAIMS ALL WARRANTIES WITH
 * REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS.  IN NO EVENT SHALL ISC BE LIABLE FOR ANY SPECIAL, DIRECT,
 * INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
 * LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE
 * OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

/* $Id: acconfig.h,v 1.53 2008/12/01 23:47:44 tbox Exp $ */

/*! \file */

/***
 *** This file is not to be included by any public header files, because
 *** it does not get installed.
 ***/

/** define on DEC OSF to enable 4.4BSD style sa_len support */
/* #undef _SOCKADDR_LEN */

/** define if your system needs pthread_init() before using pthreads */
/* #undef NEED_PTHREAD_INIT */

/** define if your system has sigwait() */
#define HAVE_SIGWAIT 1

/** define if sigwait() is the UnixWare flavor */
/* #undef HAVE_UNIXWARE_SIGWAIT */

/** define on Solaris to get sigwait() to work using pthreads semantics */
/* #undef _POSIX_PTHREAD_SEMANTICS */

/** define if LinuxThreads is in use */
/* #undef HAVE_LINUXTHREADS */

/** define if sysconf() is available */
#define HAVE_SYSCONF 1

/** define if sysctlbyname() is available */
#define HAVE_SYSCTLBYNAME 1

/** define if catgets() is available */
#define HAVE_CATGETS 1

/** define if getifaddrs() exists */
#define HAVE_GETIFADDRS 1

/** define if you have the NET_RT_IFLIST sysctl variable and sys/sysctl.h */
#define HAVE_IFLIST_SYSCTL 1

/** define if tzset() is available */
#define HAVE_TZSET 1

/** define if struct addrinfo exists */
#define HAVE_ADDRINFO 1

/** define if getaddrinfo() exists */
#define HAVE_GETADDRINFO 1

/** define if gai_strerror() exists */
#define HAVE_GAISTRERROR 1

/** define if arc4random() exists */
#define HAVE_ARC4RANDOM 1

/** define if arc4random_addrandom() exists */
#define HAVE_ARC4RANDOM_ADDRANDOM 1

/**
 * define if pthread_setconcurrency() should be called to tell the
 * OS how many threads we might want to run.
 */
/* #undef CALL_PTHREAD_SETCONCURRENCY */

/** define if IPv6 is not disabled */
#define WANT_IPV6 1

/** define if flockfile() is available */
#define HAVE_FLOCKFILE 1

/** define if getc_unlocked() is available */
#define HAVE_GETCUNLOCKED 1

/** Shut up warnings about sputaux in stdio.h on BSD/OS pre-4.1 */
/* #undef SHUTUP_SPUTAUX */
#ifdef SHUTUP_SPUTAUX
struct __sFILE;
extern __inline int __sputaux(int _c, struct __sFILE *_p);
#endif

/** Shut up warnings about missing sigwait prototype on BSD/OS 4.0* */
/* #undef SHUTUP_SIGWAIT */
#ifdef SHUTUP_SIGWAIT
int sigwait(const unsigned int *set, int *sig);
#endif

/** Shut up warnings from gcc -Wcast-qual on BSD/OS 4.1. */
/* #undef SHUTUP_STDARG_CAST */
#if defined(SHUTUP_STDARG_CAST) && defined(__GNUC__)
#include <stdarg.h>		/** Grr.  Must be included *every time*. */
/**
 * The silly continuation line is to keep configure from
 * commenting out the #undef.
 */

#undef \
	va_start
#define	va_start(ap, last) \
	do { \
		union { const void *konst; long *var; } _u; \
		_u.konst = &(last); \
		ap = (va_list)(_u.var + __va_words(__typeof(last))); \
	} while (0)
#endif /** SHUTUP_STDARG_CAST && __GNUC__ */

/** define if the system has a random number generating device */
#define PATH_RANDOMDEV "/dev/random"

/** define if pthread_attr_getstacksize() is available */
#define HAVE_PTHREAD_ATTR_GETSTACKSIZE 1

/** define if pthread_attr_setstacksize() is available */
#define HAVE_PTHREAD_ATTR_SETSTACKSIZE 1

/** define if you have strerror in the C library. */
#define HAVE_STRERROR 1

/** Define if you are running under Compaq TruCluster. */
/* #undef HAVE_TRUCLUSTER */

/* Define if OpenSSL includes DSA support */
/* #undef HAVE_OPENSSL_DSA */

/* Define if OpenSSL includes ECDSA support */
/* #undef HAVE_OPENSSL_ECDSA */

/* Define to the length type used by the socket API (socklen_t, size_t, int). */
#define ISC_SOCKADDR_LEN_T socklen_t

/* Define if threads need PTHREAD_SCOPE_SYSTEM */
/* #undef NEED_PTHREAD_SCOPE_SYSTEM */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Define to enable the "filter-aaaa-on-v4" option. */
/* #undef ALLOW_FILTER_AAAA_ON_V4 */

/* define if ATF unit tests are to be built. */
/* #undef ATF_TEST */

/* Define if recvmsg() does not meet all of the BSD socket API specifications.
   */
/* #undef BROKEN_RECVMSG */

/* Define if you cannot bind() before connect() for TCP sockets. */
/* #undef BROKEN_TCP_BIND_BEFORE_CONNECT */

/* Define to enable "rrset-order fixed" syntax. */
/* #undef DNS_RDATASET_FIXED */

/* Define to enable rpz-nsdname rules. */
#define ENABLE_RPZ_NSDNAME 1

/* Define to enable rpz-nsip rules. */
#define ENABLE_RPZ_NSIP 1

/* Solaris hack to get select_large_fdset. */
/* #undef FD_SETSIZE */

/* Define to nothing if C supports flexible array members, and to 1 if it does
   not. That way, with a declaration like `struct s { int n; double
   d[FLEXIBLE_ARRAY_MEMBER]; };', the struct hack can be used with pre-C99
   compilers. When computing the size of such an object, don't use 'sizeof
   (struct s)' as it overestimates the size. Use 'offsetof (struct s, d)'
   instead. Don't use 'offsetof (struct s, d[0])', as this doesn't work with
   MSVC and with C++ compilers. */
#define FLEXIBLE_ARRAY_MEMBER /**/

/* Define to 1 if you have the `chroot' function. */
#define HAVE_CHROOT 1

/* Define to 1 if you have the <devpoll.h> header file. */
/* #undef HAVE_DEVPOLL_H */

/* Define to 1 if you have the `dlclose' function. */
#define HAVE_DLCLOSE 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the `dlopen' function. */
#define HAVE_DLOPEN 1

/* Define to 1 if you have the `dlsym' function. */
#define HAVE_DLSYM 1

/* Define to 1 if you have the `EVP_sha256' function. */
/* #undef HAVE_EVP_SHA256 */

/* Define to 1 if you have the `EVP_sha384' function. */
/* #undef HAVE_EVP_SHA384 */

/* Define to 1 if you have the `EVP_sha512' function. */
/* #undef HAVE_EVP_SHA512 */

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `fseeko' function. */
#define HAVE_FSEEKO 1

/* Define to 1 if you have the `ftello' function. */
#define HAVE_FTELLO 1

/* Define to use gperftools CPU profiler. */
/* #undef HAVE_GPERFTOOLS_PROFILER */

/* Define to 1 if you have the <gssapi/gssapi.h> header file. */
#define HAVE_GSSAPI_GSSAPI_H 1

/* Define to 1 if you have the <gssapi/gssapi_krb5.h> header file. */
#define HAVE_GSSAPI_GSSAPI_KRB5_H 1

/* Define to 1 if you have the <gssapi.h> header file. */
#define HAVE_GSSAPI_H 1

/* Define to 1 if you have the <gssapi_krb5.h> header file. */
/* #undef HAVE_GSSAPI_KRB5_H */

/* Define to 1 if you have the if_nametoindex function. */
#define HAVE_IF_NAMETOINDEX 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <kerberosv5/krb5.h> header file. */
/* #undef HAVE_KERBEROSV5_KRB5_H */

/* Define to 1 if you have the <krb5.h> header file. */
#define HAVE_KRB5_H 1

/* Define to 1 if you have the <krb5/krb5.h> header file. */
#define HAVE_KRB5_KRB5_H 1

/* Define to 1 if you have the `c' library (-lc). */
/* #undef HAVE_LIBC */

/* Define to 1 if you have the `cap' library (-lcap). */
/* #undef HAVE_LIBCAP */

/* if system have backtrace function */
#define HAVE_LIBCTRACE /**/

/* Define to 1 if you have the `c_r' library (-lc_r). */
/* #undef HAVE_LIBC_R */

/* Define to 1 if you have the `nsl' library (-lnsl). */
/* #undef HAVE_LIBNSL */

/* Define to 1 if you have the `pthread' library (-lpthread). */
#define HAVE_LIBPTHREAD 1

/* Define to 1 if you have the `rt' library (-lrt). */
/* #undef HAVE_LIBRT */

/* Define to 1 if you have the `scf' library (-lscf). */
/* #undef HAVE_LIBSCF */

/* Define to 1 if you have the `socket' library (-lsocket). */
/* #undef HAVE_LIBSOCKET */

/* Define to 1 if you have the `thr' library (-lthr). */
/* #undef HAVE_LIBTHR */

/* Define if libxml2 was found */
/* #undef HAVE_LIBXML2 */

/* Define to 1 if you have the <linux/capability.h> header file. */
/* #undef HAVE_LINUX_CAPABILITY_H */

/* Define to 1 if you have the <linux/types.h> header file. */
/* #undef HAVE_LINUX_TYPES_H */

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `nanosleep' function. */
#define HAVE_NANOSLEEP 1

/* Define to 1 if you have the <net/if6.h> header file. */
/* #undef HAVE_NET_IF6_H */

/* Define if your OpenSSL version supports ECDSA. */
/* #undef HAVE_OPENSSL_ECDSA */

/* Define if your OpenSSL version supports GOST. */
/* #undef HAVE_OPENSSL_GOST */

/* Define to 1 if you have the `pthread_yield' function. */
/* #undef HAVE_PTHREAD_YIELD */

/* Define to 1 if you have the `pthread_yield_np' function. */
#define HAVE_PTHREAD_YIELD_NP 1

/* Define to 1 if you have the `readline' function. */
#define HAVE_READLINE 1

/* Define to 1 if you have the <regex.h> header file. */
#define HAVE_REGEX_H 1

/* Define to 1 if you have the <sched.h> header file. */
#define HAVE_SCHED_H 1

/* Define to 1 if you have the `sched_yield' function. */
#define HAVE_SCHED_YIELD 1

/* Define to 1 if you have the `setegid' function. */
#define HAVE_SETEGID 1

/* Define to 1 if you have the `seteuid' function. */
#define HAVE_SETEUID 1

/* Define to 1 if you have the `setlocale' function. */
#define HAVE_SETLOCALE 1

/* Define to 1 if you have the `setresgid' function. */
/* #undef HAVE_SETRESGID */

/* Define to 1 if you have the `setresuid' function. */
/* #undef HAVE_SETRESUID */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/capability.h> header file. */
/* #undef HAVE_SYS_CAPABILITY_H */

/* Define to 1 if you have the <sys/devpoll.h> header file. */
/* #undef HAVE_SYS_DEVPOLL_H */

/* Define to 1 if you have the <sys/dyntune.h> header file. */
/* #undef HAVE_SYS_DYNTUNE_H */

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/prctl.h> header file. */
/* #undef HAVE_SYS_PRCTL_H */

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/sockio.h> header file. */
#define HAVE_SYS_SOCKIO_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/sysctl.h> header file. */
#define HAVE_SYS_SYSCTL_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/un.h> header file. */
#define HAVE_SYS_UN_H 1

/* Define if running under Compaq TruCluster */
/* #undef HAVE_TRUCLUSTER */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `usleep' function. */
#define HAVE_USLEEP 1

/* HMAC_*() return ints */
/* #undef HMAC_RETURN_INT */

/* return type of gai_strerror */
#define IRS_GAISTRERROR_RETURN_T const char *

/* Define to the buffer length type used by getnameinfo(3). */
#define IRS_GETNAMEINFO_BUFLEN_T socklen_t

/* Define to the flags type used by getnameinfo(3). */
#define IRS_GETNAMEINFO_FLAGS_T int

/* Define to the sockaddr length type used by getnameinfo(3). */
#define IRS_GETNAMEINFO_SOCKLEN_T socklen_t

/* Define to allow building of objects for dlopen(). */
#define ISC_DLZ_DLOPEN 1

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Defined if extern char *optarg is not declared. */
/* #undef NEED_OPTARG */

/* Define if connect does not honour the permission on the UNIX domain socket.
   */
/* #undef NEED_SECURE_DIRECTORY */

/* Use the new XML schema for statistics */
/* #undef NEWSTATS */

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "bind9-bugs@isc.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "BIND"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "BIND 9.9"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "bind"

/* Define to the home page for this package. */
#define PACKAGE_URL "https://www.isc.org/downloads/BIND/"

/* Define to the version of this package. */
#define PACKAGE_VERSION "9.9"

/* Sets which flag to pass to open/fcntl to make non-blocking
   (O_NDELAY/O_NONBLOCK). */
#define PORT_NONBLOCK O_NONBLOCK

/* The size of `void *', as computed by sizeof. */
/* #undef SIZEOF_VOID_P */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Defined if you need to use ioctl(FIONBIO) instead a fcntl call to make
   non-blocking. */
/* #undef USE_FIONBIO_IOCTL */

/* Enable DNS Response Rate Limiting */
/* #undef USE_RRL */

/* define if idnkit support is to be included. */
/* #undef WITH_IDN */

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to empty if your compiler does not support "static inline". */
/* #undef inline */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef ssize_t */

/* Define to `unsigned long' if <sys/types.h> does not define. */
/* #undef uintptr_t */

/* Define to empty if the keyword `volatile' does not work. Warning: valid
   code using `volatile' can become incorrect without. Disable with care. */
/* #undef volatile */
