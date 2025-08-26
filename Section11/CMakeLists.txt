set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
file(GLOB SRCS "${SRC_DIR}/*.cpp")



set(HDR_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)

cmake_path(GET CMAKE_CURRENT_SOURCE_DIR FILENAME FOLDER_NAME)
add_library(${FOLDER_NAME} ${SRCS})
target_include_directories(${FOLDER_NAME} PUBLIC ${HDR_DIR})

file(GLOB HDRS CONFIGURE_DEPENDS "${HDR_DIR}/*.h")
source_group(TREE ${HDR_DIR} PREFIX "Section 11 Header Files" FILES ${HDRS})

