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
 * @file age.cpp
 * @brief 实现年龄读取与简单判断功能
 * @ingroup grp_1_basics_ch0
 */

#include "1_basics.hpp"

namespace awesome_cpp::basics::chapter0 {
    auto age() -> int {
        int age{ 0 };

        for (;;) {
            std::cout << "请输入您的年龄: ";

            /* 从键盘中读取1个值，并尝试将其转换为 age 对应类型 */
            if (!(std::cin >> age)) {
                /* 读取非整数时 */
                /* 1. 提示错误 */
                std::cout << "\n输入错误，请重新输入！" << std::endl;
                /* 2. 清除错误状态 */
                std::cin.clear();
                /* 3. 丢弃缓冲区中剩余的错误内容，直到遇到换行符为止 */
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(),
                                '\n');
                continue;
            }

            if (age < 0 || age > 150) {
                std::cout << "\n年龄错误，请重新输入！" << std::endl;
                continue;
            }

            break;
        }

        std::cout << "您好，您今年" << age << "岁了！";

        if (age < 25) {
            std::cout << "是个学生。" << std::endl;
        } else if (age < 65) {
            std::cout << "是个牛马。" << std::endl;
        }
        return age;
    }
}  // namespace awesome_cpp::basics::chapter0
