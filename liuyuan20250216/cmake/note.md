# cmake使用#注释
  eg: #this is camke file
## 注释块使用#[[]]
  eg: #[[#this is camke file
        #this is camke file
        #this is camke file
      ]]

# 指定最低CMake版本，不是必须的
  eg: cmake_minimum_required(VERSION3.0)

# project指定项目名字
  project(指定项目名字)

# add_executable定义工程生成可执行程序
  add_executable(可执行程序 源文件名称)

  eg:add_executable(app add.cpp sub.cpp div.cpp mult.cpp main.c)
    add_executable(app; add.cpp ;sub.cpp; div.cpp; mult.cpp; main.c)

# 设置变量
  set(变量名 变量值)
  eg: set(SRC_LIST add.cpp sub.cpp div.cpp mult.cpp main.c)  #给变量SRC_LIST初始化
  set可以指定编译器使用的C++标准
  eg: set(CMAKE_CXX_STANDARD 11) #指定使用C++11标准

# 使用变量
  通过"${}"来使用变量
  eg: add_executable(app ${SRC_LIST})

# 搜索文件
  ## aux_source_directory
  aux_source_directory(<dir> <variable>)
  dir:要搜索的目录
  variable:将dir搜索的源文件列表存储到该变量中

  *PROJECT_SOURCE_DIR是执行(cmake ..)命令的目录路径*
  eg: aux_source_directory(${PROJECT_SOURCE_DIR} SRC)  

  ## file
  file(GLOB/GLOB_RESOUSE 变量名 要搜索的文件路径和文件类型)
  GLOB：指定如果搜索当前路径
  GLOB_RESOUSE: 做递归搜索指定目录

  *CMAKE_SOURCE_DIR是CMakeLists.txt的目录路径*
  eg: file(GLOB SRC ${CMAKE_SOURCE_DIR}/*.cpp) 

# 添加头文件路径
  include_directories()
  eg: include_directories(${CMAKE_SOURCE_DIR}/include)

# 执行Cmake命令
  cmake CmakeLists.txt文件所在路径
  make 工程名

# 制作库
  add_library(库名称 STATIC/SHARED 源文件)
  eg: 动态库 add_library(calc SHARED ${SRC})
      静态库 add_library(calc STATIC ${SRC})

# 添加库文件,链接一个或多个静态库
  link_libraries(静态库)
  eg: link_libraries(calc)

# 指定库文件路径
  link_directories(静态库或动态库)
  
  *CAMKE_CURRENT_SOURCE_DIR指的是当前处理的CMakeLists.txt所在的路径*
  eg: link_directories(${CMAKE_CURRENT_BINARY_DIR}/lib1)  

# 链接一个或多个动态库 
  target_link_libraries(动态库名字 动态库访问权限（默认是public）) 一般写在cmakelists文件最后
  如果各个动态库之间没有依赖关系，无需做任何设置，三者没有没有区别，一般无需指定，使用默认的 PUBLIC 即可。
  动态库的链接具有传递性，如果动态库 A 链接了动态库B、C，动态库D链接了动态库A，此时动态库D相当于也链接了动态库B、C，并可以使用动态库B、C中定义的方法。
  eg: target_link_libraries(A B C)
      target_link_libraries(D A)

  PUBLIC：在public后面的库会被Link到前面的target中，并且里面的符号也会被导出，提供给第三方使用。
  PRIVATE：在private后面的库仅被link到前面的target中，并且终结掉，第三方不能感知你调了啥库
  INTERFACE：在interface后面引入的库不会被链接到前面的target中，只会导出符号。

  eg: target_link_libraries(app calc)

# 日志
  在CMake中可以用用户显示一条消息，该命令的名字为message：
  message([STATUS|WARNING|AUTHOR_WARNING|FATAL_ERROR|SEND_ERROR] "message to display" ...)
  (无) ：重要消息
  STATUS ：非重要消息
  WARNING：CMake 警告, 会继续执行
  AUTHOR_WARNING：CMake 警告 (dev), 会继续执行
  SEND_ERROR：CMake 错误, 继续执行，但是会跳过生成的步骤
  FATAL_ERROR：CMake 错误, 终止所有处理过程
  CMake的命令行工具会在stdout上显示STATUS消息，在stderr上显示其他所有消息。CMake的GUI会在它的log区域显示所有消息。
  CMake警告和错误消息的文本显示使用的是一种简单的标记语言。文本没有缩进，超过长度的行会回卷，段落之间以新行做为分隔符。

  eg: # 输出一般日志信息
  message(STATUS "source path: ${PROJECT_SOURCE_DIR}")
  #输出警告信息
  message(WARNING "source path: ${PROJECT_SOURCE_DIR}")
  #输出错误信息
  message(FATAL_ERROR "source path: ${PROJECT_SOURCE_DIR}")

# 宏定义
add_definitions(-D宏名称)
eg: cmake_minimum_required(VERSION 3.0)
    project(TEST)
    # 自定义 DEBUG 宏
    add_definitions(-DDEBUG)
    add_executable(app ./test.c)

  ## CMake中常用的宏:
  PROJECT_SOURCE_DIR	             使用cmake命令后紧跟的目录，一般是工程的根目录
  PROJECT_BINARY_DIR	             执行cmake命令的目录
  CMAKE_CURRENT_SOURCE_DIR	       当前处理的CMakeLists.txt所在的路径
  CMAKE_CURRENT_BINARY_DIR	target 编译目录
  EXECUTABLE_OUTPUT_PATH	         重新定义目标二进制可执行文件的存放位置
  LIBRARY_OUTPUT_PATH	             重新定义目标链接库文件的存放位置
  PROJECT_NAME	                   返回通过PROJECT指令定义的项目名称
  CMAKE_BINARY_DIR	               项目实际构建路径，假设在build目录进行的构建，那么得到的就是这个目录的路径

