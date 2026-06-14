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
 * @file chapter1.hpp
 * @brief 第一章：类型与值类别
 * @ingroup grp_1_basics_ch1
 */

#ifndef AWESOME_CPP_BASICS_CHAPTER1_HPP
#define AWESOME_CPP_BASICS_CHAPTER1_HPP

#include <climits>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <string_view>

/**
 * @namespace awesome_cpp::basics::chapter1
 * @brief 第一章：类型与值类别
 * @ingroup grp_1_basics_ch1
 */
namespace awesome_cpp::basics::chapter1 {
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
        std::cout << "最小值：" << std::numeric_limits<T>::min() << std::endl;
        std::cout << "最大值：" << std::numeric_limits<T>::max() << std::endl;
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
     * @brief 演示值的类别
     *
     * 该函数演示了值的类别，包括左值、右值、左值右值引用、函数返回值。
     * @return int 函数状态值
     * @ingroup grp_1_basics_code
     * @ingroup grp_1_basics_problems
     */
    int values();

    /**
     * @brief 演示值的类别
     *
     * 主要了解前置和后置递增属于左值还是右值。
     * @return int 函数状态值
     * @ingroup grp_1_basics_code
     * @ingroup grp_1_basics_problems
     */
    int test_01_03_1_classification_judgement();

    /**
     * @brief 演示值的类别
     *
     * 判断哪些引用绑定合法。
     * @return int 函数状态值
     * @ingroup grp_1_basics_code
     * @ingroup grp_1_basics_problems
     */
    int test_01_03_2_predictive_ref();

    /**
     * @brief 运行第一章的所有示例
     * @return int 函数状态值
     * @ingroup grp_1_basics_code
     */
    int run();
}  // namespace awesome_cpp::basics::chapter1

#ifdef __cplusplus
extern "C" {
#endif
/**
 * @brief 在 C 文件中测试 sizeof('A')
 * @ingroup grp_1_basics_code
 * @ingroup grp_1_basics_problems
 */
int test_01_00_2_test_sizeof_in_c();
#ifdef __cplusplus
}
#endif

#endif  // AWESOME_CPP_BASICS_CHAPTER1_HPP
