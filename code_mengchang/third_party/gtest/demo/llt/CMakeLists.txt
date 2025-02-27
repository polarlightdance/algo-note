set(project_path ${CMAKE_SOURCE_DIR})

set(src_list main_test.cpp
    ${project_path}/src/add.cpp
    add_testceses/add_test.cpp
)

set(execute_process_name llt_${CMAKE_PROJECT_NAME})
add_executable(${execute_process_name} ${src_list})

find_library(gtest_library gtest PATHS ${project_path}/../lib)
if(NOT gtest_library)
    message(FATAL_ERROR "Cannot find gtest library")
endif()
set(link_libraries_list ${link_libraries_list} ${gtest_library})
target_link_libraries(${execute_process_name} ${link_libraries_list})

install(TARGETS ${execute_process_name} DESTINATION ${project_path}/out/llt)
