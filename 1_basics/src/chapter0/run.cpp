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
 * @brief 第零章示例运行入口实现
 * @ingroup grp_1_basics_ch0
 */

#include "1_basics.hpp"

namespace awesome_cpp::basics::chapter0 {
    auto run() -> int {
        std::cout << "--- 第零章：环境搭建与第一个程序 ---" << std::endl;

        hello_world();
        calc();
        age();
        convert();

        return 0;
    }
}  // namespace awesome_cpp::basics::chapter0
