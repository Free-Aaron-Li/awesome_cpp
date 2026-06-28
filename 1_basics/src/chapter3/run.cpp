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
 * @file run.cpp
 * @brief 第三章示例代码入口实现
 * @ingroup grp_1_basics_ch3
 */
#include "chapter3.hpp"

namespace awesome_cpp::basics::chapter3 {

    auto
    run() -> int {
        // functions();

        // int gcd = { test_03_00_1_gcd(48, 30) };
        // printf("gcd = %d\n", gcd);

        // test_03_00_2_is_prime(100);

        // DivResult result{ div_mod(17, 5) };
        // std::cout << "商：" << result.quotient << "，余：" << result.remainder
        //           << std::endl;

        // passing();

        // double      lhs{ 27.5 };
        // double      rhs{ 29.9 };
        // std::string lhs_str{ "hello" };
        // std::string rhs_str{ "world" };
        // test_03_01_1_swap_values(lhs, rhs);
        // test_03_01_1_swap_values(lhs_str, rhs_str);

        // test_03_02_1_max_value(3, 7);
        // test_03_02_1_max_value(2.5, 1.8);
        // test_03_02_1_max_value("apple", "banana");

        // log_message("This is a log message");
        // log_message("Another log message", "DEBUG");
        // log_message("A third log message", "ERROR", true);

        // test_03_02_3_func('A'); // char -> int，重载决议：类型提升 > 类型转换

        // inline_constexpr();

        static_assert(test_03_03_2_fibonacci()[10] == 55, "F(10) != 55");
        static_assert(test_03_03_3_count_bits(0) == 0, "C(0)!=0");
        static_assert(test_03_03_3_count_bits(7) == 3, "C(7)!=3");

        return 0;
    }
}  // namespace awesome_cpp::basics::chapter3
