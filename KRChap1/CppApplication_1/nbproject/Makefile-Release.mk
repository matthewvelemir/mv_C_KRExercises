#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin_4.x-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Chp1Dm1_5.o \
	${OBJECTDIR}/Chp1Dm1_6.o \
	${OBJECTDIR}/Chp1Dm1_7.o \
	${OBJECTDIR}/Chp1Dm1_9.o \
	${OBJECTDIR}/Chp1Ex1_10.o \
	${OBJECTDIR}/Chp1Ex1_11.o \
	${OBJECTDIR}/Chp1Ex1_12.o \
	${OBJECTDIR}/Chp1Ex1_14_2.o \
	${OBJECTDIR}/Chp1Ex1_15_2.o \
	${OBJECTDIR}/Chp1Ex1_16.o \
	${OBJECTDIR}/Chp1Ex1_17.o \
	${OBJECTDIR}/Chp1Ex1_17_Alt.o \
	${OBJECTDIR}/Chp1Ex1_6.o \
	${OBJECTDIR}/Chp1Ex1_7.o \
	${OBJECTDIR}/Chp1Ex1_8.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/prefixpostfix.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cppapplication_1.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cppapplication_1.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cppapplication_1 ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Chp1Dm1_5.o: Chp1Dm1_5.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Chp1Dm1_5.o Chp1Dm1_5.c

${OBJECTDIR}/Chp1Dm1_6.o: Chp1Dm1_6.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Chp1Dm1_6.o Chp1Dm1_6.c

${OBJECTDIR}/Chp1Dm1_7.o: Chp1Dm1_7.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Chp1Dm1_7.o Chp1Dm1_7.c

${OBJECTDIR}/Chp1Dm1_9.o: Chp1Dm1_9.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Chp1Dm1_9.o Chp1Dm1_9.c

${OBJECTDIR}/Chp1Ex1_10.o: Chp1Ex1_10.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Chp1Ex1_10.o Chp1Ex1_10.c

${OBJECTDIR}/Chp1Ex1_11.o: Chp1Ex1_11.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Chp1Ex1_11.o Chp1Ex1_11.c

${OBJECTDIR}/Chp1Ex1_12.o: Chp1Ex1_12.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Chp1Ex1_12.o Chp1Ex1_12.c

${OBJECTDIR}/Chp1Ex1_14_2.o: Chp1Ex1_14_2.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Chp1Ex1_14_2.o Chp1Ex1_14_2.c

${OBJECTDIR}/Chp1Ex1_15_2.o: Chp1Ex1_15_2.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Chp1Ex1_15_2.o Chp1Ex1_15_2.c

${OBJECTDIR}/Chp1Ex1_16.o: Chp1Ex1_16.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Chp1Ex1_16.o Chp1Ex1_16.c

${OBJECTDIR}/Chp1Ex1_17.o: Chp1Ex1_17.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Chp1Ex1_17.o Chp1Ex1_17.c

${OBJECTDIR}/Chp1Ex1_17_Alt.o: Chp1Ex1_17_Alt.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Chp1Ex1_17_Alt.o Chp1Ex1_17_Alt.c

${OBJECTDIR}/Chp1Ex1_6.o: Chp1Ex1_6.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Chp1Ex1_6.o Chp1Ex1_6.c

${OBJECTDIR}/Chp1Ex1_7.o: Chp1Ex1_7.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Chp1Ex1_7.o Chp1Ex1_7.c

${OBJECTDIR}/Chp1Ex1_8.o: Chp1Ex1_8.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Chp1Ex1_8.o Chp1Ex1_8.c

${OBJECTDIR}/main.o: main.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.c

${OBJECTDIR}/prefixpostfix.o: prefixpostfix.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/prefixpostfix.o prefixpostfix.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cppapplication_1.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
