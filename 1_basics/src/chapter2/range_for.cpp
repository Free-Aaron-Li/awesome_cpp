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
 * @file range_for.cpp
 * @brief range-for 循环应用的实现
 * @ingroup grp_1_basics_files
 */

#include "chapter2.hpp"

namespace awesome_cpp::basics::chapter2 {
    int
    range_for() {
        /* 1. 求和 */
        std::array<int, 6> data{ 3, 7, 1, 9, 4, 6 };
        int                sum{ 0 };
        for (const auto& i: data) {
            sum += i;
        }
        std::cout << "sum = " << sum << std::endl;

        /* 2. 计数 */
        constexpr int target{ 6 };
        int           count{ 0 };

        for (const auto& i: data) {
            if (i == target) {
                ++count;
            }
        }
        std::cout << "值：" << target << "，出现次数：" << count << "次。"
                  << std::endl;

        /* 3. 原地修改：各元素翻倍 */
        std::array<int, 6> doubled = data;
        for (auto& i: doubled) {
            i *= 2;
        }
        std::cout << "翻倍后：";
        for (const auto& i: doubled) {
            std::cout << i << " ";
        }
        std::cout << std::endl;

        /* 4. 字符串大写 */
        std::string message{ "range-for is elegant" };
        for (auto& c: message) {
            /* 这里：toupper参数为int，char则可能是signed，如果不转换，
             * 对于扩展ASCII或者中文字符可能产生未定义行为
             */
            c = static_cast<char>(std::toupper(static_cast<signed char>(c)));
        }
        std::cout << "大写后：" << message << std::endl;

        return 0;
    }

    auto
    test_02_02_1_find_max_num() -> int {
        constexpr std::array data{ 3, 7, 1, 9, 4, 6 };
        int                  max_num{ data[0] };
        for (const auto& i: data) {
            if (i > max_num) {
                max_num = i;
            }
        }
        std::cout << "最大值：" << max_num << std::endl;
        return 0;
    }

    auto
    test_02_02_2_statistical_vowels() -> int {
        std::string message{ "Beautiful C++" };

        std::cout << "句子：“" << message << "”中，";

        int vowel_count{ 0 };

        for (auto& c: message) {
            c = static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
        }

        for (const auto& c: message) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                ++vowel_count;
            }
        }
        std::cout << "元音字母数量：" << vowel_count << std::endl;

        return 0;
    }

    auto
    test_02_02_3_modify_negative_num() -> int {
        std::array data{ 3, -7, 1, -9, 4, -6 };
        std::cout << "修改前：";
        for (const auto& i: data) {
            std::cout << i << " ";
        }
        std::cout << std::endl;

        std::cout << "修改后：";
        for (auto& i: data) {
            i = std::abs(i);
            std::cout << i << " ";
        }

        return 0;
    }
}  // namespace awesome_cpp::basics::chapter2
