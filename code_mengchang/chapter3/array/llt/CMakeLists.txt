
set(src_list main_test.cpp
    ${project_path}/src/array.cpp
    array_testcases/array_test.cpp
)

set(execute_process_name llt_${CMAKE_PROJECT_NAME})
add_executable(${execute_process_name} ${src_list})

find_library(gtest_library gtest PATHS ${project_path}/../../third_party/gtest/lib)

if(NOT gtest_library)
    message(FATAL_ERROR "Cannot find gtest library")
endif()
set(link_libraries_list ${link_libraries_list} ${gtest_library})
target_link_libraries(${execute_process_name} ${link_libraries_list})

set_target_properties(${execute_process_name} PROPERTIES
    BUILD_WITH_INSTALL_RPATH TRUE
    INSTALL_RPATH ${project_path}/out/llt/lib
    INSTALL_RPATH_USE_LINK_PATH TRUE
)

install(DIRECTORY ${project_path}/../../third_party/gtest/lib DESTINATION ${project_path}/out/llt)

install(TARGETS ${execute_process_name} DESTINATION ${project_path}/out/llt)
