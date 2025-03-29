cmake_minimum_required(VERSION 3.28)

project(demo)

set(project_path ${CMAKE_CURRENT_SOURCE_DIR})

include_directories(${project_path}/include)

# gen static library
add_subdirectory(src)

set(exe_src_list
    ${project_path}/main.cpp
)

set(exe_name exe_${CMAKE_PROJECT_NAME})

add_executable(${exe_name} ${exe_src_list})

set(link_libraries_list queue)
target_link_libraries(${exe_name} ${link_libraries_list})
set_target_properties(${exe_name} PROPERTIES
    BUILD_WITH_INSTALL_RPATH TRUE
    INSTALL_RPATH ${project_path}/out/lib
    INSTALL_RPATH_USE_LINK_PATH TRUE
)

install(TARGETS ${exe_name} DESTINATION ${project_path}/out/bin)

