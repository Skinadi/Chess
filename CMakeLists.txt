cmake_minimum_required(VERSION 3.10)

project(Chess)

set(CMAKE_CXX_STANDARD 17)

# parts of project
add_subdirectory(Application)
add_subdirectory(Library)
add_subdirectory(googletest)
#add_subdirectory(googletest-master)
add_subdirectory(Tests)
