cmake_minimum_required(VERSION 3.16)

project(DL_AS_Udemy VERSION 1.0  DESCRIPTION "Data Strcutre and Alogrithms by Abdul - Udemy" LANGUAGES CXX )

set(CMAKE_BUILD_TYPE Debug)
set(CXX_STANDARD 14)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 11)

list(APPEND CHAPTERS Section5 Section6 Section7 Section8 Section11)

foreach(chapter  ${CHAPTERS})
    add_subdirectory(${chapter})
endforeach()

add_executable(DS_AL_Udemy main.cpp)

#target_include_directories(DS_AL_Udemy PUBLIC ${PROJECT_BINARY_DIR})

target_link_libraries(DS_AL_Udemy ${CHAPTERS})

