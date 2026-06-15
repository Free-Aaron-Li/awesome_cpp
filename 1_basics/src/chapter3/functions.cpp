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
 * @file functions.cpp
 * @brief 函数应用的实现
 * @ingroup grp_1_basics_files
 */


#include "chapter3.hpp"

namespace awesome_cpp::basics::chapter3 {
    auto
    add(const int lhs, const int rhs) -> int {
        return lhs + rhs;
    }

    auto
    max_of(const int lhs, const int rhs) -> int {
        return lhs > rhs ? lhs : rhs;
    }

    auto
    factorial(const int n) -> int {
        if (n < 0) {
            throw std::invalid_argument(
                      "factorial is undefined for negative numbers");
        }

        /* 递归写法，优势：代码简洁、可读性强、函数式风格
         * 缺点：有栈溢出风险、性能可能不如循环
         * 除非是循环非常不好写，且笃定不会嵌套很多层，才考虑使用递归
         */
        return n > 1 ? n * factorial(n - 1) : 1;
    }

    auto
    is_even(const int n) -> bool {
        return n % 2 == 0;
    }

    auto
    print_result(const std::string& label, const int value) -> void {
        std::cout << label << " " << value << std::endl;
    }

    auto
    functions() -> int {
        /* 1. 加法 */
        const int sum{ add(15, 27) };
        print_result("15 + 27 = ", sum);

        /* 2. 取较大值 */
        const int bigger{ max_of(42, 17) };
        print_result("max(42, 17) = ", bigger);

        /* 3. 阶乘 */
        const int factorial_of_10{ factorial(10) };
        print_result("10! = ", factorial_of_10);

        /* 4. 判断奇偶 */
        std::array data{ 0, 1, 2, 7, 10 };
        for (const auto& i: data) {
            std::cout << i << " is " << (is_even(i) ? "even" : "odd")
                      << std::endl;
        }

        return 0;
    }

    auto
    test_03_00_1_gcd(const int lhs, const int rhs) -> int {
        return rhs == 0 ? lhs : test_03_00_1_gcd(rhs, lhs % rhs);
    }

    auto
    test_03_00_2_is_prime(const int n) -> int {
        std::cout << "在" << n << "中，包含的素数有：";

        for (int i = 2; i <= n; ++i) {
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
    div_mod(const int dividend, const int divisor) -> DivResult {
        /* 按值返回，不会出现空悬指针问题 */
        /* 1. 常规写法 */
        // return DivResult{ dividend / divisor, dividend % divisor };

        /* 2. C++20 写法：明确告诉结构体顺序 */
        return DivResult{
            .quotient  = dividend / divisor,
            .remainder = dividend % divisor,
        };
    }
}  // namespace awesome_cpp::basics::chapter3
