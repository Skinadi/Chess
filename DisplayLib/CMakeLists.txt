cmake_minimum_required(VERSION 3.10)

project(DisplayLib)

cmake_minimum_required(VERSION 2.8)

add_subdirectory(Tests)


aux_source_directory(. SRC_LIST)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../LogicLib)

add_library(${PROJECT_NAME} ${SRC_LIST})

target_link_libraries(${PROJECT_NAME} LogicLib)

