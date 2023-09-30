# 编写CMakelists.txt
# cmake . [生成Makefiles]
# make [执行编译 MinGW为mingw32-make]
cmake_minimum_required(VERSION 3.24) #cmake最低版本
project(gtaLib CXX) #项目名称 C++程序
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(RC_FILE ${PROJECT_SOURCE_DIR}/src/gtaLib_resource.rc)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_FLAGS "-fPIC -static -s")
# add_subdirectory(src bin)
add_compile_options(-std=c++17 -O3 -lstdc++ -lgcc -lwinpthread -finput-charset=UTF-8 -fexec-charset=GBK) #编译可选项参数
# file(GLOB SOURCE ./src/*.cpp)
set(SOURCE
    src/memorycontrol.h
    src/memorycontrol.cpp
    src/keyboard.h
    src/keyboard.cpp
    src/gtav.h
    src/gtav.cpp
    src/gtaLib.h
    src/gtaLib.cpp
    src/gtaLib.def
)
# add_executable(main ${SOURCE} ${RE_FILE}) #生成可执行文件
include_directories(".") #外部头文件地址
link_directories(".") #外部库文件地址
# add_library(gtaLib_static STATIC ${SOURCE}) #生成库文件
# target_link_libraries(gtaLib_static stdc++ gcc winpthread) #外部链接库
# set_target_properties(gtaLib_static PROPERTIES OUTPUT_NAME gtaLib)
# set_target_properties(gtaLib_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)
add_library(${PROJECT_NAME} SHARED ${SOURCE} ${RC_FILE})
# set_target_properties(gtaLib PROPERTIES OUTPUT_NAME gtaLib)
# set_target_properties(gtaLib PROPERTIES CLEAN_DIRECT_OUTPUT 1)
# add_executable(main ${SOURCE} ${RC_FILE})
add_custom_command(TARGET gtaLib
POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E rename ${PROJECT_BINARY_DIR}/lib/libgtaLib.dll ${PROJECT_BINARY_DIR}/lib/gtaLib.dll
    COMMAND ${CMAKE_COMMAND} -E rename ${PROJECT_BINARY_DIR}/lib/libgtaLib.dll.a ${PROJECT_BINARY_DIR}/lib/libgtaLib.a
    COMMENT "rename finished"
    VERBATIM
)