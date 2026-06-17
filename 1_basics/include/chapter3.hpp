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

#ifndef AWESOME_CPP_CHAPTER3_HPP
#define AWESOME_CPP_CHAPTER3_HPP

/**
 * @namespace awesome_cpp::basics::chapter3
 * @brief 第三章：函数
 * @ingroup grp_1_basics_ch3
 */

#include <array>
#include <chrono>
#include <iostream>
#include <stdexcept>
#include <string>

namespace awesome_cpp::basics::chapter3 {
    /**
     * @brief 两个整数相加
     * @param lhs 第一个整数
     * @param rhs 第二个整数
     * @return 两个整数的和
     * @ingroup grp_1_basics_code
     */
    int add(int lhs, int rhs);

    /**
     * @brief 求两个整数中的最大值
     * @param lhs 第一个整数
     * @param rhs 第二个整数
     * @return 两个整数中的最大值
     * @ingroup grp_1_basics_code
     */
    int max_of(int lhs, int rhs);

    /**
     * @brief 计算阶乘
     * @param n 非负整数
     * @return n的阶乘
     * @throw std::invalid_argument 如果n为负数
     * @ingroup grp_1_basics_code
     */
    int factorial(int n);

    /**
     * @brief 判断整数奇偶性
     * @param n 整数
     * @return 如果n为偶数，则返回true，否则返回false
     * @ingroup grp_1_basics_code
     */
    bool is_even(int n);

    /**
     * @brief 打印结果
     * @param label 标签
     * @param value 值
     * @ingroup grp_1_basics_code
     */
    void print_result(const std::string& label, int value);

    /**
     * @brief 函数基础示例代码应用实现
     * @return int 函数状态值
     * @ingroup grp_1_basics_code
     */
    int functions();

    /**
     * @brief 求最大公约数
     * @note
     * - 使用辗转相除法求最大公约数。
     * - 原理：对于两个整数 @c a 和 @c b，如果：
     *   \f$ a = b*q + r \f$，其中 @c r 是 @c a 除以 @c b 的余数。
     *   那么存在公式：\f$ \gcd(a,b) = \gcd(b,r) \f$。
     * - 非必要不要使用递归，因为递归调用会占用大量的栈空间；
     *   如果不能笃定调用层数，请采用循环调用。
     *
     * @param lhs 第一个整数
     * @param rhs 第二个整数
     * @return 两个整数的最大公约数
     * @ingroup grp_1_basics_code
     */
    int test_03_00_1_gcd(int lhs, int rhs);

    /**
     * @brief 查找素数
     * @param n 包含素数的最大范围值
     * @return 函数状态值
     * @ingroup grp_1_basics_code
     */
    int test_03_00_2_is_prime(int n);

    /**
     * @brief 除法结果结构体
     *
     * 用于存储整数除法的商和余数
     */
    struct DivResult {
        int quotient;   ///< 商
        int remainder;  ///< 余数
    };

    /**
     * @brief 整数除法
     * @param dividend 被除数
     * @param divisor 除数
     * @return DivResult 除法结果结构体
     * @ingroup grp_1_basics_code
     */
    DivResult div_mod(int dividend, int divisor);

    /**
     * @brief 交换两个整数的值
     * @param lhs 第一个整数
     * @param rhs 第二个整数
     * @ingroup grp_1_basics_code
     */
    void swap_values(int& lhs, int& rhs);

    /**
     * @brief 大数据结构体
     *
     * 用于测试函数参数传递方式
     */
    struct BigData {
        int payload[4096];  ///< 大数据载荷
    };

    /**
     * @brief 求大数据载荷的和（值传递版）
     *
     * @param data 大数据结构体
     * @return long 大数据载荷的和
     */
    long sum_by_value(BigData data);

    /**
     * @brief 求大数据载荷的和（常量引用传递版）
     *
     * @param data 大数据结构体
     * @return long 大数据载荷的和
     */
    long sum_by_const_ref(const BigData& data);

    /**
     * @brief 构建问候语
     * @note 使用 @c const 引用笔名啊字符串拷贝，同时支持右值绑定。
     * @param name 用户姓名
     * @return std::string 问候语
     */
    std::string build_greeting(const std::string& name);

    /**
     * @brief 参数传递方式应用的实现
     * @return int 函数状态值
     * @ingroup grp_1_basics_ch3
     */
    int passing();

    /**
     * @brief 交换两个双精度浮点数的值
     * @param lhs 第一个双精度浮点数
     * @param rhs 第二个双精度浮点数
     * @return int 函数状态值
     * @ingroup grp_1_basics_code
     */
    int test_03_01_1_swap_values(double& lhs, double& rhs);

    /**
     * @brief 交换两个字符串的值
     * @param lhs 第一个字符串
     * @param rhs 第二个字符串
     * @return int 函数状态值
     * @ingroup grp_1_basics_code
     */
    int test_03_01_1_swap_values(std::string& lhs, std::string& rhs);
    /**
     * @brief 打印整数值
     * @param value 要打印的整数
     * @ingroup grp_1_basics_code
     */
    void print(int value);

    /**
     * @brief 打印双精度浮点数值
     * @param value 要打印的双精度浮点数
     * @ingroup grp_1_basics_code
     */
    void print(double value);

    /**
     * @brief 打印字符串
     * @param str 要打印的C风格字符串
     * @ingroup grp_1_basics_code
     */
    void print(const char* str);

    /**
     * @brief 绘制矩形
     * @param width 矩形宽度
     * @param height 矩形高度
     * @param fill 是否填充，默认为false
     * @param brush 绘制字符，默认为'#'
     * @ingroup grp_1_basics_code
     */
    void draw_rect(int width, int height, bool fill = false, char brush = '#');

    /**
     * @brief 缩放值（单参数版本）
     * @param value 原始值
     * @ingroup grp_1_basics_code
     */
    void scale_value(int value);

    /**
     * @brief 缩放值（双参数版本）
     * @param value 原始值
     * @param factor 缩放因子
     * @ingroup grp_1_basics_code
     */
    void scale_value(int value, int factor);

    /**
     * @brief 重载与默认参数应用的实现
     * @return int 函数状态值
     * @ingroup grp_1_basics_code
     */
    int overload();

    /**
     * @brief 求两个整数中的最大值
     * @param value1 第一个整数
     * @param value2 第二个整数
     * @return int 函数状态值
     * @ingroup grp_1_basics_code
     */
    int test_03_02_1_max_value(int value1, int value2);

    /**
     * @brief 求两个双精度浮点数中的最大值
     * @param value1 第一个双精度浮点数
     * @param value2 第二个双精度浮点数
     * @return int 函数状态值
     * @ingroup grp_1_basics_code
     */
    int test_03_02_1_max_value(double value1, double value2);

    /**
     * @brief 求两个C风格字符串的字典序最大值
     * @param value1 第一个C风格字符串
     * @param value2 第二个C风格字符串
     * @return int 函数状态值
     * @ingroup grp_1_basics_code
     */
    int test_03_02_1_max_value(const char* value1, const char* value2);

    /**
     * @brief 记录日志消息
     * @param text 日志文本内容
     * @param level 日志级别，默认为"INFO"
     * @param show_timestamp 是否显示时间戳，默认为false
     * @ingroup grp_1_basics_code
     */
    void test_03_02_2_log_message(const char* text, const char* level = "INFO",
                                  bool show_timestamp = false);

    /**
     * @brief 函数重载测试（整数参数版本）
     * @param x 整数参数
     * @ingroup grp_1_basics_code
     */
    void test_03_02_3_func(int x);

    /**
     * @brief 函数重载测试（短整型参数版本）
     * @param x 短整型参数
     * @ingroup grp_1_basics_code
     */
    void test_03_02_3_func(short x);

    /**
     * @brief 运行第三章第所有示例及测试
     * @return int 函数状态值
     * @ingroup grp_1_basics_ch3
     */
    int run();

}  // namespace awesome_cpp::basics::chapter3

#endif  // AWESOME_CPP_CHAPTER3_HPP
