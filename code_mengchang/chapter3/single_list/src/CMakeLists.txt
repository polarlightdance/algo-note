
set(src_list main.cpp
    single_list.cpp
)

set(execute_process_name src_${CMAKE_PROJECT_NAME})
add_executable(${execute_process_name} ${src_list})

install(TARGETS ${execute_process_name} DESTINATION ${project_path}/out/bin)
