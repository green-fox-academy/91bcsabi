cmake_minimum_required(VERSION 3.14)
project(test)

set(CMAKE_CXX_STANDARD 14)

set(SDL2_ROOT_PATH /usr/local)

set(EXECUTABLES "draw;draw2;draw3;draw4;draw5;draw6;draw7;draw8;draw9;draw10;draw11;draw12;draw13;draw14;draw15")
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

IF(WIN32)
    set(MINGW_VERSION i686-w64-mingw32)
ENDIF()

find_package(SDL2_all REQUIRED)
