#指定最低CMake版本，不是必须的
cmake_minimum_required(VERSION 3.15)
#指定项目名字
project(arry)
#s设置变量
set(SRC_LIST arry.cpp)
#定义工程生成可执行程序
add_executable(arry ${SRC_LIST})