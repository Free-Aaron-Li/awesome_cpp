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
 * @file hello_world.cpp
 * @brief 实现打印 Hello World 功能
 * @ingroup grp_1_basics_ch0
 */

#include "chapter0.hpp"

namespace awesome_cpp::basics::chapter0 {
    /**
     * @brief 打印 Hello World 消息
     */
    auto
    test_00_03_1_hello_world() -> int {
        std::cout << "Hello, World!" << std::endl;
        return 0;
    }
}  // namespace awesome_cpp::basics::chapter0
