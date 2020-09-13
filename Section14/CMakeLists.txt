set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(HDR_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)

file(GLOB SRCS "${SRC_DIR}/*.cpp")
add_library(Section14 ${SRCS})


target_include_directories(Section14 PUBLIC ${HDR_DIR})
file(GLOB HDRS CONFIGURE_DEPENDS "${HDR_DIR}/*.h")
source_group(TREE ${HDR_DIR} PREFIX "Section14 header files" FILES ${HDRS})
