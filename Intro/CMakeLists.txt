set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src )
set(HDR_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)

file(GLOB SRCS "${SRC_DIR}/*.cpp")
file(GLOB HRDS CONFIGURE_DEPENDS "${HRD_DIR}/*.h")

add_library(Intro ${SRCS})

target_include_directories(Intro PUBLIC ${HDR_DIR})

source_group(TREE ${HDR_DIR} PREFIX "Header Files Intro" FILES ${HDRS})

