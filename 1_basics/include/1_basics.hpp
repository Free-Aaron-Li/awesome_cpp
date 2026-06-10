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

#include <bit>
#include <cmath>
#include <cstdint>
#include <iomanip>
#include <iostream>
#include <limits>
#include <string_view>

/**
 * @namespace awesome_cpp::basics
 * @brief C++ 基础示例项目的命名空间
 * @ingroup grp_1_basics_api
 */
namespace awesome_cpp::basics {

    /**
     * @namespace awesome_cpp::basics::chapter0
     * @brief 第零章：环境搭建与第一个程序
     * @ingroup grp_1_basics_ch0
     */
    namespace chapter0 {
        /**
         * @brief 执行简单的加法计算并输出结果
         * @return int 计算结果（两个输入数字之和）
         *
         * 该函数会提示用户输入两个整数，然后计算它们的和并打印到控制台。
         * @ingroup grp_1_basics_code
         */
        int calc();

        /**
         * @brief 打印 Hello World 消息
         * @return int 函数状态值
         * @ingroup grp_1_basics_code
         * @ingroup grp_1_basics_problems
         */
        int test_00_03_1_hello_world();

        /**
         *  @brief 读取用户年龄，并输出一段包含年龄的问候语
         *  @return int 返回用户输入的年龄
         *  @ingroup grp_1_basics_code
         * @ingroup grp_1_basics_problems
         */
        int test_00_03_2_age();

        /**
         * @brief 摄氏度转华氏度
         * @return double 转换后华氏度温度
         * @ingroup grp_1_basics_code
         * @ingroup grp_1_basics_problems
         */
        double test_00_03_3_convert();

        /**
         * @brief 运行第零章的所有示例
         * @return int 函数状态值
         * @ingroup grp_1_basics_code
         */
        int run();
    }  // namespace chapter0

    /**
     * @namespace awesome_cpp::basics::chapter1
     * @brief 第一章：类型与值类别
     * @ingroup grp_1_basics_ch1
     */
    namespace chapter1 {
        /**
         * @brief 打印数值类型的范围信息
         * @tparam T 要展示范围的数值类型
         * @param type_name 类型名称，用于输出标题
         * @return int 函数状态值
         * @ingroup grp_1_basics_code
         */
        template<typename T>
        int
        print_type_range(const std::string_view type_name) {
            std::cout << "=== " << type_name << " ===" << std::endl;
            std::cout << "最小值：" << std::numeric_limits<T>::min()
                      << std::endl;
            std::cout << "最大值：" << std::numeric_limits<T>::max()
                      << std::endl;
            std::cout << "字节数：" << sizeof(T) << std::endl;
            return 0;
        }

        /**
         * @brief 打印基本整数类型在当前平台上的大小
         * @return int 函数状态值
         * @ingroup grp_1_basics_code
         */
        int print_integer();

        /**
         * @brief 浮点数比较
         *
         * 简单测试，通过高精度输出，确定浮点数本质是近似值。
         * @return int 函数状态值
         * @ingroup grp_1_basics_code
         * @ingroup grp_1_basics_problems
         */
        int test_01_00_3_float_comparison();

        /**
         * @brief 判断两个双精度浮点数是否近似相等
         *
         * 该函数通过绝对误差和相对误差两种方式来判断两个浮点数是否足够接近，
         * 避免了直接使用 == 比较浮点数所带来的精度问题。
         *
         * @param lval 第一个待比较的双精度浮点数
         * @param rval 第二个待比较的双精度浮点数
         * @param absolute_epsilon 绝对误差阈值，默认为 1e-12，适用于接近 0 的值
         * @param relative_epsilon 相对误差阈值，默认为 1e-9，适用于数值较大的值
         * @return bool 如果两个数在给定误差范围内相等则返回 true，否则返回
         * false
         *
         * @note 比较逻辑：
         * - 首先使用绝对误差判断：|x - y| <= absolute_epsilon
         * - 若绝对误差判断不通过，则使用相对误差判断：|x - y| <= max(|x|, |y|)
         * * relative_epsilon
         *
         * @ingroup grp_1_basics_code
         */
        bool is_approximately_equal(double lval, double rval,
                                    double absolute_epsilon = 1e-12,
                                    double relative_epsilon = 1e-9);

        /**
         * @brief 打印字符
         * @return int 函数状态值
         * @ingroup grp_1_basics_code
         */
        int print_char();

        /**
         * @brief 打印布尔值
         * @return int 函数状态值
         * @ingroup grp_1_basics_code
         */
        int print_bool();

        /**
         * @brief 获取各种数据类型的大小
         * @return int 函数状态值
         * @ingroup grp_1_basics_code
         * @ingroup grp_1_basics_problems
         */
        int test_01_00_1_sizeof_all();

        /**
         * @brief 演示浮点数精度陷阱
         *
         * 该函数展示浮点数运算中常见的精度问题：浮点数累加误差
         * @return int 函数状态值
         * @ingroup grp_1_basics_code
         */
        int float_precision_pitfalls();

        /**
         * @brief 类型转换示例
         *
         * 该函数演示了不同类型之间的转换，包括隐式转换、显式转换和布尔转换
         * @return int 函数状态值
         * @ingroup grp_1_basics_code
         */
        int type_conversion();

        /**
         * @brief 安全的温度转换
         * @return int 函数状态值
         * @ingroup grp_1_basics_code
         * @ingroup grp_1_basics_problems
         */
        int test_01_01_3_saft_temperature_conversion();

        /**
         * @brief 演示常量的使用
         *
         * 该函数演示了常量的使用，包括常量的定义、constexpr、常量与指针、
         * 常量与引用。
         * @return int 函数状态值
         * @ingroup grp_1_basics_code
         */
        int const_demo();

        /**
         * @brief 演示圆的面积计算
         *
         * 该函数演示了圆的面积计算，包括常量的使用。
         * @param radius 圆的半径
         * @return int 函数状态值
         * @ingroup grp_1_basics_code
         * @ingroup grp_1_basics_problems
         */
        double test_01_02_2_circle_area(double radius);

        /**
         * @brief 运行第一章的所有示例
         * @return int 函数状态值
         * @ingroup grp_1_basics_code
         */
        int run();
    }  // namespace chapter1

}  // namespace awesome_cpp::basics

#ifdef __cplusplus /* 当前这份代码，正在被 C++编译器处理吗？ */
extern "C" {       /* 花括号内声明的函数请使用C语言的链接规约来处理 */
#endif
/**
 * @brief 在 C 文件中测试 sizeof('A')
 * @ingroup grp_1_basics_code
 * @ingroup grp_1_basics_problems
 */
void test_01_00_2_test_sizeof_in_c();
#ifdef __cplusplus
}
#endif

#endif  // AWESOME_CPP_1_BASICS_HPP

/** @} */
