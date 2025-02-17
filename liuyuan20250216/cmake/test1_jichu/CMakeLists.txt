#指定最低CMake版本，不是必须的
cmake_minimum_required(VERSION 3.15)

#[[指定编译器使用C++11标准
set(CMAKE_CXX_STANDARD 11)]]

#指定项目名字
project(test)

#添加头文件路径
include_directories(${CMAKE_SOURCE_DIR}/include)

#搜索文件  PROJECT_SOURCE_DIR是执行(cmake ..)命令的目录路径  CMAKE_SOURCE_DIR是CMakeLists.txt的目录路径
# aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC)

file(GLOB SRC ${CMAKE_SOURCE_DIR}/src/*.cpp)

#[[设置变量
set(SRC add.cpp sub.cpp div.cpp mult.cpp main.cpp)]]

#定义工程生成可执行程序
add_executable(app ${SRC})

