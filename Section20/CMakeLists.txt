set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(HDR_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)

file(GLOB SRCS "${SRC_DIR}/*.cpp")


add_library(Section20 ${SRCS})

target_include_directories(Section20 PUBLIC ${HDR_DIR})
file(GLOB HDRS "${HDR_DIR}/*.h")
source_group(TREE ${HDR_DIR} PREFIX "Section20 header files" FILES ${HDR})


