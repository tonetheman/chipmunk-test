# Install script for directory: /home/agcc/projects/Chipmunk-5.2.0/src

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/usr/local")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "Release")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libchipmunk.so.5.1")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libchipmunk.so.5.1"
         RPATH "")
  ENDIF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libchipmunk.so.5.1")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/agcc/projects/Chipmunk-5.2.0/src/libchipmunk.so.5.1"
    "/home/agcc/projects/Chipmunk-5.2.0/src/libchipmunk.so"
    )
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libchipmunk.so.5.1")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libchipmunk.so.5.1")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libchipmunk.so.5.1")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/agcc/projects/Chipmunk-5.2.0/src/libchipmunk.a")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/chipmunk" TYPE FILE FILES
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/._cpCollision.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/chipmunk_ffi.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/cpBody.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/._cpVect.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/._cpShape.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/cpArray.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/._cpArbiter.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/cpHashSet.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/chipmunk_types.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/cpArbiter.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/._chipmunk_unsafe.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/cpVect.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/chipmunk.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/cpCollision.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/._cpBB.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/cpPolyShape.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/cpBB.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/._chipmunk_ffi.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/._cpArray.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/cpSpace.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/._cpBody.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/._cpSpace.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/cpSpaceHash.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/._cpSpaceHash.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/chipmunk_unsafe.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/cpShape.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/._cpPolyShape.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/._cpHashSet.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/chipmunk/constraints" TYPE FILE FILES
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/constraints/._cpDampedRotarySpring.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/constraints/cpSimpleMotor.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/constraints/._util.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/constraints/._cpRatchetJoint.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/constraints/cpGrooveJoint.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/constraints/cpPivotJoint.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/constraints/cpSlideJoint.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/constraints/cpRotaryLimitJoint.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/constraints/._cpConstraint.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/constraints/._cpSlideJoint.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/constraints/util.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/constraints/cpGearJoint.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/constraints/._cpPivotJoint.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/constraints/._cpRotaryLimitJoint.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/constraints/cpConstraint.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/constraints/._cpGearJoint.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/constraints/._cpGrooveJoint.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/constraints/._cpPinJoint.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/constraints/cpDampedSpring.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/constraints/._cpDampedSpring.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/constraints/cpPinJoint.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/constraints/._cpSimpleMotor.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/constraints/cpDampedRotarySpring.h"
    "/home/agcc/projects/Chipmunk-5.2.0/include/chipmunk/constraints/cpRatchetJoint.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

