#指定最低CMake版本，不是必须的
cmake_minimum_required(VERSION 3.15)

#[[指定编译器使用C++11标准
set(CMAKE_CXX_STANDARD 11)]]

#指定项目名字
project(test)

#搜索文件  PROJECT_SOURCE_DIR是执行(cmake ..)命令的目录路径  CAMKE_CURRENT_SOURCE_DIR是CMakeLists.txt的目录路径
#aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC)
file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

#添加头文件路径
include_directories(${PROJECT_SOURCE_DIR}/include)

#[[设置变量
set(SRC add.cpp sub.cpp div.cpp mult.cpp main.cpp)]]

#链接一个或多个静态库
#link_libraries(calc)

#指定库文件路径 CAMKE_CURRENT_SOURCE_DIR指的是当前处理的CMakeLists.txt所在的路径
link_directories(${CAMKE_CURRENT_SOURCE_DIR}/lib2)

#定义工程生成可执行程序
add_executable(app ${SRC})

#制作静态库
#add_library(calc SHARED ${SRC})
#制作静态库
#add_library(calc STATIC ${SRC})

#链接一个或多个动态库
target_link_libraries(app calc)
