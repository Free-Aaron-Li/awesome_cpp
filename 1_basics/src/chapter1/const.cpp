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

#include "chapter1.hpp"

/**
 * @file const.cpp
 * @brief 常量应用的实现
 * @ingroup grp_1_basics_files
 */


namespace awesome_cpp::basics::chapter1 {
    /**
     * @brief constexpr 函数：计算平方
     * @param x 被平方的值
     * @return x 的平方
     */
    constexpr int
    square(int x) {
        return x * x;
    }

    auto
    const_demo() -> int {
        /* 常量的定义 */
        const int kMaxSize{ 100 };
        // kMaxSize = 200; // error: cannot assign to variable 'kMaxSize' with
        // const-qualified type 'const int'
        std::cout << "kMaxSize = " << kMaxSize << std::endl;

        /* constexpr */
        constexpr int kArraySize{ square(5) };
        std::cout << "kMinSize = " << kArraySize << std::endl;

        /* 指向常量的指针 */
        int        a{ 10 };
        int        b{ 20 };
        const int* p_to_const = &a;
        // *p_to_const = 100;  /* error: read-only variable is not assignable */
        p_to_const = &b; /* 可以改变指针指向对象，不能改变指向对象值 */
        std::cout << "*p_to_const = " << *p_to_const << std::endl;

        /* 常量指针 */
        int* const const_p = &a;
        *const_p           = 100; /* 允许修改指向对象值，但不能修改指向对象 */
        // *const_p           = &b;
        std::cout << "*const_p = " << *const_p << std::endl;

        /* 常指针常量 */
        const int* const const_p_const = &a;
        // *const_p_const                 = 100;
        // const_p_const                  = &b;
        std::cout << "*const_p_const = " << *const_p_const << std::endl;

        /* const 引用 */
        int        x{ 42 };
        const int& ref{ x };
        // ref = 100; /* 类似：常指针常量，不允许修改指向对象的值 */
        x = 100; /* 指向对象本身允许修改，因为并不是常量 */
        std::cout << "ref = " << ref << std::endl;

        return 0;
    }

    double
    test_01_02_2_circle_area(const double radius) {
        constexpr double pi{ 3.14159265 };
        constexpr double kMaxRadius{ 100.0 };
        constexpr double kMinRadius{ 0.1 };

        if (radius > kMaxRadius || radius < kMinRadius) {
            std::cerr << "Invalid radius: " << radius << std::endl;
            return -1;
        }

        const double area = pi * radius * radius;
        return area;
    }
}  // namespace awesome_cpp::basics::chapter1
