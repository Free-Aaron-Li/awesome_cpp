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

#ifndef AWESOME_CPP_CHAPTER2_HPP
#define AWESOME_CPP_CHAPTER2_HPP

#include <iostream>

/**
 * @namespace awesome_cpp::basics::chapter2
 * @brief 第二章：控制流
 * @ingroup grp_1_basics_ch2
 */
namespace awesome_cpp::basics::chapter2 {
    /**
     * @brief 根据分数返回成绩等级（使用if-else）
     * @param score 百分制分数
     * @return 等级
     */
    char grade_by_if(int score);

    /**
     * @brief 根据分数返回成绩等级（使用switch）
     * @param score 百分制分数
     * @return 等级
     */
    char grade_by_switch(int score);

    /**
     * @brief 判定百分制成绩所处等级。
     * @return int 函数状态值
     * @ingroup grp_1_basics_code
     */
    int conditional();

    /**
     * @brief 判定数字正负。
     * @return int 函数状态值
     * @ingroup grp_1_basics_code
     */
    int test_02_00_1_determine_num();

    /**
     * @brief 简单的表达式计算。
     * @return int 函数状态值
     * @ingroup grp_1_basics_code
     */
    int test_02_00_2_simple_calc();

    int test_02_00_3_date_check();

    /**
     * @brief 运行第二章第所有示例及测试
     * @return int 函数状态值
     * @ingroup grp_1_basics_ch2
     */
    int run();
}  // namespace awesome_cpp::basics::chapter2

#endif  // AWESOME_CPP_CHAPTER2_HPP
