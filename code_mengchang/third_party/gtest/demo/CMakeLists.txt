cmake_minimum_required(VERSION 3.28)

project(demo)

set(project_path ${CMAKE_CURRENT_SOURCE_DIR})

include_directories(${project_path}/../include
    ${project_path}/include/
)

add_subdirectory(src)
add_subdirectory(llt)
