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
 * @file chapter0.hpp
 * @brief 第零章：环境搭建与第一个程序
 * @ingroup grp_1_basics_ch0
 */

#ifndef AWESOME_CPP_BASICS_CHAPTER0_HPP
#define AWESOME_CPP_BASICS_CHAPTER0_HPP

#include <iostream>

/**
 * @namespace awesome_cpp::basics::chapter0
 * @brief 第零章：环境搭建与第一个程序
 * @ingroup grp_1_basics_ch0
 */
namespace awesome_cpp::basics::chapter0 {
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
     * @ingroup grp_1_basics_ch0
     */
    int run();
}  // namespace awesome_cpp::basics::chapter0

#endif  // AWESOME_CPP_BASICS_CHAPTER0_HPP
