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
 * @defgroup grp_1_basics 1_basics: C++ 基础语法
 * @brief 本项目主要介绍 C++ 的基础语法特性。
 *
 * ### 项目目标
 * 引导初学者了解 C++ 程序的结构和基本输入输出操作。
 *
 * ### 涵盖内容
 * - **程序结构**: 深入理解 `main` 函数的定义规范。
 *   - **返回类型**: 为什么必须是 `int`？
 *     - C++ 标准 (ISO/IEC 14882) 明确规定 `main` 的返回类型必须是 `int`。
 *     - 尽管某些编译器（如旧版 VC++）支持 `void
 * main()`，但这属于非标准行为，会导致代码移植性下降。
 *     - **返回值含义**: 返回 `0` 通常表示程序正常执行完毕；非 `0`
 * 值则向操作系统报告异常退出。
 *   - **命令行参数**: `argc` 与 `argv` 的作用。
 *     - `argc` (Argument Count):
 * 整数类型，表示传递给程序的参数总数（包含程序名本身）。
 *     - `argv` (Argument Vector): 字符指针数组，存储具体的参数内容。
 * - **输入输出**: 掌握 `std::cout` 和 `std::endl` 的基本用法。
 * - **命名空间**: 初步接触 `std` 命名空间。
 * - **现代 C++ 规范**: 学习如何编写符合现代 C++ 标准的代码及文档注释。
 *
 * ### 如何学习
 * 1. 阅读 `main.cpp` 中的源码和注释。
 * 2. 尝试修改输出内容并重新编译运行。
 * 3. 参考
 * [cppreference](https://en.cppreference.com/w/cpp/language/main_function)
 * 了解更多细节。
 */

/**
 * @defgroup grp_1_basics_files 相关文件
 * @brief 该子项目涉及的源代码与头文件
 * @ingroup grp_1_basics
 */

/**
 * @defgroup grp_1_basics_ch0 第零章：环境搭建与第一个程序
 * @brief 介绍 C++ 开发环境的搭建以及编写、编译、运行第一个程序。
 * @ingroup grp_1_basics
 */

/**
 * @defgroup grp_1_basics_ch1 第一章：类型与值类别
 * @brief 介绍 C++ 中的基本类型及其值类别。
 * @ingroup grp_1_basics
 */

/**
 * @defgroup grp_1_basics_ch2 第二章：控制流
 * @brief 介绍 C++ 中的控制流语句。
 * @ingroup grp_1_basics
 */

/**
 * @defgroup grp_1_basics_code 源码实现
 * @brief 该子项目涉及的核心功能实现
 * @ingroup grp_1_basics
 */

/**
 * @defgroup grp_1_basics_api 公开接口
 * @brief 1_basics 模块对外暴露的函数声明与接口
 * @ingroup grp_1_basics
 */

/**
 * @defgroup grp_1_basics_problems 题目练习
 * @brief 该项目包含所有测试题目的代码实现。
 * @ingroup grp_1_basics
 */

/**
 * @file 1_basics.hpp
 * @brief 1_basics 项目的基础头文件
 * @ingroup grp_1_basics_files
 */

/**
 * @addtogroup grp_1_basics_files
 * @{
 */

#ifndef AWESOME_CPP_1_BASICS_HPP
#define AWESOME_CPP_1_BASICS_HPP

/**
 * @namespace awesome_cpp::basics
 * @brief C++ 基础示例项目的命名空间
 * @ingroup grp_1_basics_api
 */

// 引入第零章相关的头文件：环境搭建与第一个程序
#include "chapter0.hpp"
// 引入第一章相关的头文件：类型与值类别
#include "chapter1.hpp"
// 引入第二章相关的头文件：控制流
#include "chapter2.hpp"

#endif  // AWESOME_CPP_1_BASICS_HPP

/** @} */

/** @} */
