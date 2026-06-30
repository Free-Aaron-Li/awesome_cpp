# 1. 最低 CMake 版本要求
cmake_minimum_required(VERSION 4.2)
# 2. 项目名称，版本号，支持语言
project(awesome_cpp VERSION 0.4.0 LANGUAGES C CXX)

# 3. C++ 标准说明
set(CMAKE_CXX_STANDARD 23)
# 4. 强制编译器支持 C++ 标准
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# 5. 禁用编译器扩展
set(CMAKE_CXX_EXTENSIONS OFF)

# 6. 确定可执行文件位置（项目顶层）
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)

# 7. Doxygen 配置
# 提供一个开关选项，可以在运行时通过 -DENABLE_DOXYGEN=ON/OFF 来控制
option(ENABLE_DOXYGEN "是否启用 Doxygen 文档生成功能" ON)

if (ENABLE_DOXYGEN)
    # 查找系统中是否安装了 Doxygen
    find_package(Doxygen)
    if (DOXYGEN_FOUND)
        # 定义输入模板和输出配置文件的路径
        # Doxyfile.in 是模板，Doxyfile 是 CMake 运行后生成的实际配置文件
        set(DOXYFILE_IN ${CMAKE_CURRENT_SOURCE_DIR}/doxygen_tools/Doxyfile.in)
        set(DOXYFILE_OUT ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile)

        if (EXISTS ${DOXYFILE_IN})
            # 使用 configure_file 在 CMake 配置阶段自动生成 Doxyfile
            # 它会将模板中的 @PROJECT_VERSION@ 等变量替换为当前项目的实际值
            configure_file(${DOXYFILE_IN} ${DOXYFILE_OUT} @ONLY)

            # 添加一个自定义目标 'doc'
            # 使用 ALL 关键字，使得每次构建项目（Build）时都会自动触发文档生成
            # 如果只想手动生成，可以去掉 ALL，然后运行 'cmake --build . --target doc'
            add_custom_target(doc ALL
                    COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYFILE_OUT}
                    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
                    COMMENT "正在生成 API 文档 (使用 Doxygen)..."
                    VERBATIM)
        else ()
            message(WARNING "未找到 Doxygen 模板文件: ${DOXYFILE_IN}，跳过目标添加")
        endif ()
    else ()
        message(STATUS "未找到 Doxygen 运行环境，无法启用文档生成功能")
    endif ()
else ()
    message(STATUS "Doxygen 功能已被手动关闭")
endif ()

add_subdirectory(1_basics)