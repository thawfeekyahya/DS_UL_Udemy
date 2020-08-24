set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
file(GLOB SRCS "${SRC_DIR}/*.cpp")
add_library(Section11 ${SRCS})

set(HDR_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(Section11 PUBLIC ${HDR_DIR})
file(GLOB HDRS CONFIGURE_DEPENDS "${HDR_DIR}/*.h")
source_group(TREE ${HDR_DIR} PREFIX "Section 11 Header Files" FILES ${HDRS})

