cmake_minimum_required(VERSION 3.1)

project(skeleton)

# Use C++11
set(CMAKE_CXX_STANDARD 11)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake/sanitizers" ${CMAKE_MODULE_PATH})

find_package(Sanitizers)

include(GetDoctest)

add_subdirectory(src)

enable_testing()
add_subdirectory(tests)

