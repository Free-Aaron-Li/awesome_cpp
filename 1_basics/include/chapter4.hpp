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

#ifndef AWESOME_CPP_CHAPTER4_HPP
#define AWESOME_CPP_CHAPTER4_HPP

/**
 * @namespace awesome_cpp::basics::chapter4
 * @brief 第四章：指针与引用
 * @ingroup grp_1_basics_ch4
 */

#include <iostream>
#include <print>

namespace awesome_cpp::basics::chapter4 {
    /**
     * @brief 通过指针交换两个变量的值。
     * @ingroup grp_1_basics_code
     */
    void swap_by_pointer();

    /**
     * @brief 空指针检查
     * @param label 传入字符串
     * @param p 传入指针
     * @ingroup grp_1_basics_code
     */
    void safe_print(const char* label, const int* p);

    /**
     * @brief 指针基础应用的示例
     * @ingroup grp_1_basics_code
     */
    void pointers();

    /**
     * @brief swap 函数并观察地址变化
     * @note 通过指针交换顺序，本质与直接进行值交换并没有本质区别。
     * 只不过是使用指针操控值，所以交换后仅会发生值变化，而不会出现地址变化。
     *
     * @ingroup grp_1_basics_code
     * @ingroup grp_1_basics_problems
     */
    void test_04_00_1_swap();

    /**
     * @brief 追踪指针变化
     * @note 实际上发生两个变化：x 的值被更改，以及p的值被更改，从而导致最终结果
     * `x=20`，`y=30`，`*p` 和 `*q` 都指向 `y`。
     *
     * @ingroup grp_1_basics_code
     * @ingroup grp_1_basics_problems
     */
    void test_04_00_2_tracking_ptr();

    /**
     * @brief 运行第四章第所有示例及测试
     * @ingroup grp_1_basics_ch4
     */
    void run();
}  // namespace awesome_cpp::basics::chapter4

#endif  // AWESOME_CPP_CHAPTER4_HPP
