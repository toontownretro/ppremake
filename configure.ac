

dnl ****************  UPDATE VERSION NUMBER HERE  ****************
dnl **         Also be sure to change the version number        **
dnl **                at the end of config_msvc.h.              **
dnl ****************                              ****************
AC_INIT(ppremake, 1.26)
dnl ****************  UPDATE VERSION NUMBER HERE  ****************

dnl Process this file with autoconf to produce a configure script.
AC_CONFIG_SRCDIR(src/ppremake.cxx)

AM_INIT_AUTOMAKE

AM_CONFIG_HEADER(config.h)

AC_PREFIX_DEFAULT(/usr/local/panda)
AC_PROG_MAKE_SET
AC_CANONICAL_HOST

# If we have a CFLAGS variable but not a CXXFLAGS variable, let them
# be the same.
if test "${CXXFLAGS+set}" != set -a "${CFLAGS+set}" = set; then
  CXXFLAGS=$CFLAGS
fi
CPPFLAGS="${CPPFLAGS} -DINSTALL_DIR='\""'$(prefix)'"\"'"

# Save these variables for later, so we can easily append to them or
# change them.
user_ldflags=${LDFLAGS-}
user_cflags=${CFLAGS-}
user_cxxflags=${CXXFLAGS-}

dnl Checks for programs.
AC_PROG_CC
AC_PROG_CXX

dnl First, we'll test for C-specific features.
AC_LANG_C

dnl Checks for libraries.
libdl=
libm=
AC_CHECK_LIB(m, sin, libm=-lm)
AC_SUBST(libm)

dnl Checks for header files.
AC_HEADER_STDC
AC_CHECK_HEADERS(malloc.h alloca.h unistd.h utime.h io.h minmax.h dirent.h glob.h sys/types.h sys/time.h sys/utime.h sys/wait.h string.h regex.h getopt.h)

dnl Checks for typedefs, structures, and compiler characteristics.

dnl Checks for library functions.
AC_CHECK_FUNCS(getopt)

AM_EXTRA_RECURSIVE_TARGETS([src])


dnl Now we can test some C++-specific features.
AC_LANG_CPLUSPLUS
AC_HEADER_IOSTREAM
AC_HEADER_SSTREAM
AC_NAMESPACE
AC_IOS_BINARY
AC_OPEN_MASK


AC_LANG_C

AC_ARG_WITH(platform,
[  --with-platform=platform  Set the $[PLATFORM] predefined variable.])

if test "${with_platform-no}" != "no"; then
  PLATFORM=$with_platform
else
  case "$host_os" in
    irix*) PLATFORM=Irix;;
    linux*) PLATFORM=Linux;;
    cygwin*) PLATFORM=Cygwin;;
    darwin*) PLATFORM=OSX;;
    freebsd*) PLATFORM=FreeBSD;;
    *) echo "Cannot determine platform from $host_os; use --with-platform=name."
       exit 1;;
  esac
fi

if test "$PLATFORM" = "Cygwin"; then
  AC_DEFINE(HAVE_CYGWIN, 1, [Define if we're compiling with Cygwin.])
  if test "$host_cpu" = "x86_64"; then
    PLATFORM=Cygwin64
  fi
fi

if test "$PLATFORM" = "OSX"; then
  AC_DEFINE(HAVE_OSX, 1, [Define if we're compiling for OSX.])
fi

AC_DEFINE_UNQUOTED(PLATFORM, "$PLATFORM",
   [The platform ppremake is compiled for.  This primarily controls the
    initial setting of the PLATFORM ppremake variable.])

AC_CONFIG_FILES([
  Makefile
  src/Makefile
])
AC_OUTPUT
