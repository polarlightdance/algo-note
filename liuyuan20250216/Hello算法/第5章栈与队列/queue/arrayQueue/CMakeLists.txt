#指定最低CMake版本，不是必须的
cmake_minimum_required(VERSION 3.15)

#指定项目名字
project(arrayQueue)

#添加头文件路径
include_directories(${CMAKE_SOURCE_DIR}/include)

#搜索文件  PROJECT_SOURCE_DIR是执行(cmake ..)命令的目录路径  CMAKE_SOURCE_DIR是CMakeLists.txt的目录路径
#file(GLOB ......) 获取匹配指定模式的文件列表
file(GLOB ARRAY_QUEUE_SOURCES ${CMAKE_SOURCE_DIR}/src/*.cpp)

#定义工程生成可执行程序
add_executable(arrayQueue ${ARRAY_QUEUE_SOURCES})