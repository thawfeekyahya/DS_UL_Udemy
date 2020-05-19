cmake_minimum_required(VERSION 3.16)

project(DL_AS_Udemy VERSION 1.0  DESCRIPTION "Data Strcutre and Alogrithms by Abdul - Udemy" LANGUAGES CXX )

set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 11)

add_subdirectory(Intro)


list(APPEND CHAPTERS Intro)

add_executable(DS_AL_Udemy main.cpp)

#target_include_directories(DS_AL_Udemy PUBLIC ${PROJECT_BINARY_DIR})

target_link_libraries(DS_AL_Udemy ${CHAPTERS})

