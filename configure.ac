AC_INIT([ml gsoapclient], [2.7.10])
AC_PREREQ(2.53)


AM_INIT_AUTOMAKE([1.6.3 subdir-objects])

AC_CONFIG_SRCDIR([src/monalisawsclient.h])

AC_CANONICAL_HOST
case "${host}" in
   ia64-*-linux*)
      AC_DEFINE(IA64,1,[64bit (Itanium) Linux])
      ;;
   x86_64-*-linux*)
      AC_DEFINE(IA64,1,[64bit (AMD?) Linux])
      ;;
esac
AC_PROG_MAKE_SET


WORKDIR=`pwd`
AC_SUBST(WORKDIR)

#################################################################
# GSOAP options

SOAP_CPP_DIR="/usr/loca/bin"

AC_ARG_WITH(gsoap-soapcpp2,
            [  --with-gsoap-soapcpp2=PATH  dir where soap2cpp executable resides],
            [SOAP_CPP_DIR="$withval"])

WEBSERVICE="http://aliendb1.cern.ch:6004/axis/services/MLWebService"

AC_ARG_WITH(monalisa-webservice,
	    [  --with-monalisa-webservice=URL  url from where to download webservice description],
            [WEBSERVICE="$withval"])

AC_SUBST(WEBSERVICE)

AC_PATH_PROG(SOAP_CPP,soapcpp2,[no],$SOAP_CPP_DIR)

test -e "src/MLWebServiceSoapBinding.nsmap" ||  if test x"$SOAP_CPP" = xno
  then
    AC_MSG_ERROR([no soapcpp2 executable was found in path. Use --with-gsoap-soapcpp2=PATH option])
  fi

# Checks for programs.
AC_PROG_CXX
AC_PROG_AWK
AC_PROG_CC
AC_PROG_CPP
AM_PROG_CC_C_O
AC_PROG_INSTALL
AC_PROG_LN_S
AM_PROG_LEX
AC_PROG_YACC
AC_PROG_LIBTOOL
AC_CHECK_PROG([HAVEDOXYGEN],[doxygen],[yes],[no])
AM_CONDITIONAL(WITHDOXYGEN, test x"$HAVEDOXYGEN" = xyes)

# Checks for header files.
AC_HEADER_STDC
AC_HEADER_SYS_WAIT
AC_CHECK_HEADERS([arpa/inet.h fcntl.h float.h limits.h netdb.h netinet/in.h stdlib.h string.h strings.h sys/socket.h sys/time.h sys/timeb.h unistd.h])


# Checks for typedefs, structures, and compiler characteristics.
AC_C_CONST
AC_TYPE_PID_T
AC_TYPE_SIZE_T
AC_HEADER_TIME
AC_STRUCT_TM

# Checks for library functions.
AC_FUNC_FORK
AC_PROG_GCC_TRADITIONAL
AC_FUNC_MALLOC
AC_FUNC_MKTIME
AC_FUNC_STRFTIME
AC_FUNC_STRTOD
AC_CONFIG_FILES([Makefile
		 src/Makefile])
AC_OUTPUT
