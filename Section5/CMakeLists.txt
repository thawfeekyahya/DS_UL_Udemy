set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src )
set(HDR_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)

file(GLOB SRCS "${SRC_DIR}/*.cpp")
file(GLOB HDRS CONFIGURE_DEPENDS "${HRD_DIR}/*.h")

add_library(Section5 ${SRCS})

target_include_directories(Section5 PUBLIC ${HDR_DIR})

source_group(TREE ${HDR_DIR} PREFIX "Header Files Intro" FILES ${HDRS})

