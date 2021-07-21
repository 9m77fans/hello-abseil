cmake_minimum_required(VERSION 3.5.0)
project(hello)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(vendor/abseil-cpp)

include_directories(
  /usr/local/include
  ${CMAKE_CURRENT_SOURCE_DIR}/vendor/abseil-cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_subdirectory(src)
