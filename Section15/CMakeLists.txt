set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(HDR_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)

file(GLOB SRCS "${SRC_DIR}/*.cpp")
cmake_path(GET CMAKE_CURRENT_SOURCE_DIR FILENAME FOLDER_NAME)


add_library(${FOLDER_NAME} ${SRCS})

target_include_directories(${FOLDER_NAME} PUBLIC ${HDR_DIR})
file(GLOB HDRS CONFIGURE_DEPENDS "${HDR_DIR}/*.h")
source_group(TREE ${HDR_DIR} PREFIX "Section15 Header files" FILES ${HDRS})

