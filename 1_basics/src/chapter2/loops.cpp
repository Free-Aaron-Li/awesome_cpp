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
 * @file loops.cpp
 * @brief 循环语句应用的实现
 * @ingroup grp_1_basics_files
 */

#include "chapter2.hpp"

namespace awesome_cpp::basics::chapter2 {
    auto
    print_multiplication_table() -> int {
        std::cout << "=== 九九乘法表 ===" << std::endl;
        for (int i = 1; i <= 9; ++i) {
            for (int j = 1; j <= i; ++j) {
                std::cout << j << "*" << i << " ";
            }
            std::cout << std::endl;
        }
        return 0;
    }

    auto
    guess_number_game() -> int {
        int guess{ 0 };
        int attempts_nums{ 0 };

        std::cout << "=== 猜数字游戏 ===" << std::endl;
        std::cout << "我想你一个1～100之间的数字，你来猜！" << std::endl;

        for (;;) {
            constexpr int kSecret{ 42 };
            std::cout << "你的猜测是：";
            if (!(std::cin >> guess)) {
                std::cout << "输入错误！" << std::endl;
                continue;
            }
            ++attempts_nums;

            if (guess == kSecret) {
                std::cout << "恭喜你，猜对了！" << std::endl;
                std::cout << "你总共猜了" << attempts_nums << "次。"
                          << std::endl;
                break;
            }

            if (guess < kSecret) {
                std::cout << "猜小了！" << std::endl;
            } else {
                std::cout << "猜大了！" << std::endl;
            }
        }
        return 0;
    }

    auto
    print_pyramid() -> int {
        constexpr int kHeight{ 5 };

        std::cout << "=== 金字塔图案 ===" << std::endl;

        for (int i = 1; i <= kHeight; ++i) {
            for (int j = 1; j <= kHeight - i; ++j) {
                std::cout << " ";
            }
            for (int j = 1; j <= 2 * i - 1; ++j) {
                std::cout << "*";
            }
            std::cout << std::endl;
        }
        return 0;
    }

    auto
    test_02_01_1_print_hollow_square() -> int {
        constexpr int kHeight{ 5 };

        for (int i = 0; i < kHeight; ++i) {
            for (int j = 0; j < kHeight; ++j) {
                if (i == 0 || i == kHeight - 1 || j == 0 || j == kHeight - 1) {
                    std::cout << "*";
                } else {
                    std::cout << " ";
                }
            }
            std::cout << std::endl;
        }

        return 0;
    }

    auto
    test_02_01_2_calculate_factorial() -> int {
        long long     result{ 1 };
        constexpr int n{ 5 }; /* long long 最高容纳 25! */

        for (int i = 1; i <= n; ++i) {
            result *= i;
        }

        std::cout << n << "! = " << result << std::endl;

        return 0;
    }

    auto
    test_02_01_3_find_prime_num() -> int {
        constexpr int kMaxNum{ 100 };

        std::cout << "2-" << kMaxNum << " 间的素数包括：";

        for (int i = 2; i <= kMaxNum; ++i) {
            bool is_prime = true;
            for (int j = 2; j * j < i; ++j) {
                if (i % j == 0) {
                    is_prime = false;
                    break;
                }
            }
            if (is_prime) {
                std::cout << i << " ";
            }
        }
        return 0;
    }

    auto
    test_02_01_4_print_rhombus() -> int {
        constexpr int kHeight{ 5 };
        constexpr int kMind{ kHeight / 2 + 1 };

        for (int i = 0; i <= kHeight; ++i) {
            const int distance = std::abs(kMind - i);

            for (int j = 1; j <= distance; ++j) {
                std::cout << " ";
            }
            for (int j = 1; j <= kHeight - 2 * distance; ++j) {
                std::cout << "*";
            }
            std::cout << std::endl;
        }

        return 0;
    }

}  // namespace awesome_cpp::basics::chapter2
