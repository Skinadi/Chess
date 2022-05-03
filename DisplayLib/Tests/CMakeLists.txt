cmake_minimum_required(VERSION 3.10)

project(DisplayTests)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../LogicLib)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/..)

aux_source_directory(. SRC_LIST)

add_executable(${PROJECT_NAME} ${SRC_LIST})

target_link_libraries(${PROJECT_NAME} LogicLib)
target_link_libraries(${PROJECT_NAME} DisplayLib)
target_link_libraries(${PROJECT_NAME} gmock_main)

