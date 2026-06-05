# 1. 最低 CMake 版本要求
cmake_minimum_required(VERSION 4.2)
# 2. 项目名称，版本号，支持语言
project(awesome_cpp VERSION 0.1.0 LANGUAGES C CXX)

# 3. C++ 标准说明
set(CMAKE_CXX_STANDARD 23)
# 4. 强制编译器支持 C++ 标准
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# 5. 禁用编译器扩展
set(CMAKE_CXX_EXTENSIONS OFF)

# 6. 确定可执行文件位置（项目顶层）
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)

# 7. Doxygen 配置
find_package(Doxygen)
if (DOXYGEN_FOUND)
    # 将 Doxyfile.in 中的 @PROJECT_VERSION@ 替换为 CMake 中的项目版本
    configure_file(${CMAKE_CURRENT_SOURCE_DIR}/doxygen_tools/Doxyfile.in
            ${CMAKE_CURRENT_SOURCE_DIR}/doxygen_tools/Doxyfile @ONLY)

    # 添加 doc 目标，通过 cmake --build . --target doc 运行
    add_custom_target(doc
            COMMAND ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/doxygen_tools/Doxyfile
            WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
            COMMENT "Generating API documentation with Doxygen"
            VERBATIM)
endif ()

add_subdirectory(1_basics)