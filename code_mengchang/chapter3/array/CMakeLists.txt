cmake_minimum_required(VERSION 3.28)

project(array)

set(project_path ${CMAKE_CURRENT_SOURCE_DIR})

include_directories( ${project_path}/include
    ${project_path}/../../third_party/gtest/include
)

add_subdirectory(src)
add_subdirectory(llt)
