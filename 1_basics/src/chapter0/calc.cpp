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
 * @file calc.cpp
 * @brief 实现简单的加法计算功能
 * @ingroup grp_1_basics_ch0
 */

#include "1_basics.hpp"

namespace awesome_cpp::basics::chapter0 {

    /**
     *  @note 函数内存在 `a` 和 `b` 两个变量，用于读取整数。但注意：C++
     *  不会自动给局部变量初始化，那么 `a` 的值就是内存里残留的垃圾数据。
     *  虽然后续 `std::cin` 会立刻覆盖它，但是养成“声明即初始化”的习惯非常重要，
     *  这能帮助我们避开一大类难以调试的问题。
     */
    auto
    calc() -> int {
        int a{ 0 };
        int b{ 0 };

        std::cout << "请输入第一个数字: ";
        std::cin >> a;
        std::cout << "请输入第二个数字: ";
        std::cin >> b;

        const int sum{ a + b };
        std::cout << a << " + " << b << " = " << sum << std::endl;

        return sum;
    }

} // namespace awesome_cpp::basics::chapter0

