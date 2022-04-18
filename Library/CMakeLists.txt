cmake_minimum_required(VERSION 3.10)

project(ChessLib)

cmake_minimum_required(VERSION 2.8)

aux_source_directory(. SRC_LIST)
aux_source_directory(./Pieces SRC_LIST1)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Pieces)

add_library(${PROJECT_NAME} ${SRC_LIST} ${SRC_LIST1})

