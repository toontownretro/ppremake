/* config_msvc.h.

   This file was generated by hand for use on Win32 environments when
   building with Microsoft Visual Studio.  It will have to be kept
   up-to-date by hand with the automatically-generated config.h on
   other platforms.
*/

/* Define if you have the ANSI C header files.  */
#define STDC_HEADERS 1

/* Define if the C++ compiler uses namespaces.  */
#define HAVE_NAMESPACE 1

/* Define if the C++ iostream library supports ios::binary.  */
/* #undef HAVE_IOS_BINARY */

/* Define if fstream::open() accepts a third parameter for umask. */
/* #undef HAVE_OPEN_MASK */

/* Define if we're compiling with Cygwin. */
/* #undef HAVE_CYGWIN */

/* Define if we're compiling using Windows Microsoft Visual C++. */
#define WIN32_VC 1

/* The platform ppremake is compiled for.  This primarily controls the
   initial setting of the $[PLATFORM] variable. */
#define PLATFORM "Win32"

/* Define if you have the `getopt' function.  */
/* #undef HAVE_GETOPT */

/* Define if you have the <alloca.h> header file.  */
/* #undef HAVE_ALLOCA_H */

/* Define if you have the <dirent.h> header file.  */
/* #undef HAVE_DIRENT_H */

/* Define if you have the <io.h> header file.  */
#define HAVE_IO_H 1

/* Define if you have the <iostream> header file.  */
#define HAVE_IOSTREAM 1

/* Define if you have the <malloc.h> header file.  */
#define HAVE_MALLOC_H 1

/* Define if you have the <minmax.h> header file.  */
/* #undef HAVE_MINMAX_H */

/* Define if you have the <regex.h> header file.  */
/* #undef HAVE_REGEX_H */

/* Define if you have the <sstream> header file.  */
#define HAVE_SSTREAM 1

/* Define if you have the <string.h> header file.  */
#define HAVE_STRING_H 1

/* Define if you have the <sys/time.h> header file.  */
/* #undef HAVE_SYS_TIME_H 1 */

/* Define if you have the <sys/types.h> header file.  */
/* #undef HAVE_SYS_TYPES_H 1 */

/* Define if you have the <sys/utime.h> header file.  */
#define HAVE_SYS_UTIME_H 1

/* Define if you have the <sys/wait.h> header file.  */
/* #undef HAVE_SYS_WAIT_H 1 */

/* Define if you have the <unistd.h> header file.  */
/* #undef HAVE_UNISTD_H 1 */

/* Define if you have the <utime.h> header file.  */
/* #undef HAVE_UTIME_H 1 */

/* Name of package */
#define PACKAGE "ppremake"

/* The default value of INSTALL_DIR within ppremake. */
#define INSTALL_DIR C:\\Panda3d

/****************  UPDATE VERSION NUMBER HERE  ****************
 **         Also be sure to change the version number        **
 **             at the beginning of configure.in.            **
 ****************                              ****************/
#define VERSION "1.14"
/****************  UPDATE VERSION NUMBER HERE  ****************/
