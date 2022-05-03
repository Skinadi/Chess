cmake_minimum_required(VERSION 3.10)

project(ChessTests)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../DisplayLib/Tests)

add_custom_target(
  RunTests ALL
  COMMAND DisplayTests
  DEPENDS LogicLib
  COMMENT "MyComment"
)
