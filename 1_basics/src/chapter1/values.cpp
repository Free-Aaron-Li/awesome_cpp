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
 * @file values.cpp
 * @brief 值类别应用的实现
 * @ingroup grp_1_basics_files
 */

#include "chapter1.hpp"

namespace awesome_cpp::basics::chapter1 {

    /**
     * @brief 返回一个整数值（右值）
     * @return 42
     */
    constexpr auto
    get_value() -> int {
        return 42;
    }

    /**
     * @brief 表示一个全局整数值。
     *
     * 该变量用于存储一个初始值为 42 的整数，并且可以被读取或修改。
     */
    int global_value = 42;

    /**
     * @brief 返回一个整数值（左值）
     * @return global_value
     */
    constexpr auto
    get_ref() -> int& {
        return global_value;
    }

    auto
    values() -> int {
        /* 1. 左值 */
        int  x{ 10 };  /* x 是左值*/
        int* ptr = &x; /* &x 合法：x是左值可以取地址 */
        *ptr     = 20; /* *ptr是左值 */
        int arr[3]{ 1, 2, 3 };
        arr[0] = 9; /* arr[0]是左值 */

        std::cout << "x = " << x << std::endl;
        std::cout << "ptr = " << ptr << std::endl;
        std::cout << "*ptr = " << *ptr << std::endl;
        std::cout << "arr[0] = " << arr[0] << std::endl;

        /* 2. 右值 */
        // &42;          /* 错误，不能对右值取地址 */
        // &(x + 1);     /* 同样，x+1的结果是右值 */
        // &get_value(); /* 函数返回值是右值 */

        int sum = x + arr[1]; /* 此时，arr[1]为右值 */
        std::cout << "sum = " << sum << std::endl;

        /* 3. 左值引用 */
        int& lref = x; /* 左值引用绑定至左值 */
        lref      = 30;
        std::cout << "lref = " << lref << std::endl;

        // int& bad = 42; /* 错误，左值引用不能绑定至右值 */

        const int& clref = 42; /* const 引用可以绑定右值 */
        std::cout << "clref = " << clref << std::endl;

        /* 4. 右值引用 */
        int&& rref  = 42;    /* 右值引用可以绑定至右值 */
        int&& rref2 = x + 1; /* x+1 为右值 */
        // int&& rref3 = x;     /* 错误：右值引用不能绑定到左值 */

        std::cout << "rref = " << rref << std::endl;
        std::cout << "rref2 = " << rref2 << std::endl;

        /* 函数返回值的值类别 */
        int val = get_value(); /* get_value() 返回右值 */
        std::cout << "val = " << val << std::endl;

        get_ref() = 200; /* get_ref() 返回左值 */
        std::cout << "global_value = " << global_value << std::endl;
        return 0;
    }

    auto
    test_01_03_1_classification_judgement() -> int {
        int x = 10;
        // int* ptr = &(x++); /* x++,++x 均为右值 */
        // int* ptr = &(++x);
        return 0;
    }

    auto
    test_01_03_2_predictive_ref() -> int {
        int  a  = 10; /* ok */
        int& r1 = a;  /* ok */
        // int&       r2 = 10; /* no */
        const int& r3 = 10; /* ok */
        int&&      r4 = 10; /* ok */
        // int&&      r5 = a;  /* no */
        const int& r6 = a; /* ok */
        return 0;
    }
}  // namespace awesome_cpp::basics::chapter1
