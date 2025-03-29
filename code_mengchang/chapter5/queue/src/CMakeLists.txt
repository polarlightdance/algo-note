cmake_minimum_required(VERSION 3.28)

project(stack)

set(src_list queue.cpp)

set(lib_name "queue")
add_library(${lib_name} STATIC ${src_list})

install(TARGETS ${lib_name} DESTINATION ${project_path}/out/lib)
