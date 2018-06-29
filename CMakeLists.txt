cmake_minimum_required(VERSION 3.10)
project(HelloWorld)

include_directories(/Applications/root_v6.12.06/include)
link_directories(/Applications/root_v6.12.06/lib)

set(CMAKE_CXX_STANDARD 11)

add_executable(HelloWorld main.cpp complex.cpp complex.h functioncs.cpp functioncs.h)
TARGET_LINK_LIBRARIES(HelloWorld Core Imt RIO Net Hist Graf Graf3d Gpad Tree TreePlayer Rint Postscript Matrix Physics MathCore Thread MultiProc pthread m dl ASImage)