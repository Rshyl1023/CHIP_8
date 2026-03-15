cmake_minimum_required(VERSION 4.0)

# 确定工程和语言
project(CHIP_8_Emulator VERSION 1.0 LANGUAGES C CXX)

# 设定标准
# 必须使用 C++20 不允许向下兼容
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# 禁止使用非标准编译器扩展
set(CMAKE_CXX_EXTENSIONS OFF)

# 如果当前使用的编译器是微软的 MSVC，强迫它源文件和执行字符集全部使用 UTF-8
if (MSVC)
    add_compile_options(/utf-8)
endif()

# 第三方库
set(CMAKE_PREFIX_PATH "${CMAKE_SOURCE_DIR}/third_party/SDL3" ${CMAKE_PREFIX_PATH})

# 寻找 SDL2 依赖
find_package(SDL3 REQUIRED)

# 组装实体
add_executable(CHIP_8 src/main.cpp)

# 链接吸附
target_link_libraries(CHIP_8 PRIVATE SDL3::SDL3)