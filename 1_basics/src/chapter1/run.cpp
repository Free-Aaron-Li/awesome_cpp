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
 * @brief 第一章示例运行入口实现
 * @ingroup grp_1_basics_ch1
 */

#include "1_basics.hpp"

namespace awesome_cpp::basics::chapter1 {
    auto
    run() -> int {
        std::cout << "--- 第一章：类型与值类别 ---" << std::endl;

        // print_integer();
        // float_comparison();
        // print_char();
        // print_bool();
        // sizeof_all();
        // float_precision_pitfalls();
        // type_conversion();
        test_01_01_3_saft_temperature_conversion();
        return 0;
    }
}  // namespace awesome_cpp::basics::chapter1
