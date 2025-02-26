#指定最低CMake版本，不是必须的
cmake_minimum_required(VERSION 3.15)

#指定项目名字
project(linkedList)

#设置变量
set(SRC_LIST list.cpp)

#定义工程生成可执行程序
add_executable(linkedList ${SRC_LIST})