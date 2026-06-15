// Copyright (C) 2026 Aaron <communicate_aaron@outlook.com>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

/**
 * @file main.cpp
 * @brief 现代 C++ 基础示例程序 - Hello World
 * @ingroup grp_1_basics_files
 */

/**
 * @addtogroup grp_1_basics_code
 * @{
 */

#include "1_basics.hpp"

/**
 * @brief 程序主入口函数
 * @param argc 命令行参数个数
 * @param argv 命令行参数数组
 * @return int 程序退出状态码
 *
 * @note main() 函数的返回类型必须是 int，而不能是 void，原因如下：
 * - **C++ 标准要求**: ISO/IEC 14882 标准明确规定 main() 的返回类型必须是 int
 * - **操作系统交互**: 返回值用于向操作系统报告程序执行状态
 *   - 返回 0 表示程序正常退出
 *   - 返回非 0 值表示程序异常退出，具体含义由程序定义
 * - **可移植性**: 使用 void main()
 * 是非标准扩展，会导致代码在不同编译器/平台间的可移植性问题
 * - **最佳实践**: 即使编译器允许省略 return 语句（会自动返回
 * 0），显式返回仍是推荐做法
 *
 * @see https://en.cppreference.com/cpp/language/main_function
 */
int
main([[maybe_unused]] int argc, [[maybe_unused]] char* argv[]) {
    // awesome_cpp::basics::chapter0::run();
    // awesome_cpp::basics::chapter1::run();
    // awesome_cpp::basics::chapter2::run();
    awesome_cpp::basics::chapter3::run();
    return 0;
}

/** @} */
