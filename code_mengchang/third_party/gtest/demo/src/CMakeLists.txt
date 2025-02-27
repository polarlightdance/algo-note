set(project_path ${CMAKE_SOURCE_DIR})

set(src_list main.cpp
    add.cpp
)

set(execute_process_name src_${CMAKE_PROJECT_NAME})
add_executable(${execute_process_name} ${src_list})

install(TARGETS ${execute_process_name} DESTINATION ${project_path}/out/bin)
