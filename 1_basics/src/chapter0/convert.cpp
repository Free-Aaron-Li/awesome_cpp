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
 * @file convert.cpp
 * @brief 实现摄氏度与华氏度的转换功能
 * @ingroup grp_1_basics_ch0
 */

#include "1_basics.hpp"

namespace awesome_cpp::basics::chapter0 {
    auto test_00_03_3_convert() -> double {
        double      celsius{ 0 };
        double      fahrenheit{ 0 };
        std::string input{};

        for (;;) {
            std::cout << "请输入摄氏温度（按：q/Q退出）：";
            std::cin >> input;

            if (input == "q" || input == "Q") {
                break;
            }

            try {
                celsius    = std::stod(input); /* string to double */
                fahrenheit = celsius * 9.0 / 5.0 + 32.0;
                std::cout << celsius << "°C = " << fahrenheit << "°F"
                          << std::endl;
            } catch (const std::invalid_argument&) {
                std::cout << "\n输入错误，请重新输入" << std::endl;
            } catch (const std::out_of_range&) {
                std::cout << "\n输入超出范围，请重新输入" << std::endl;
            }
        }
        return fahrenheit;
    }
}  // namespace awesome_cpp::basics::chapter0
