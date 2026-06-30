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
 * @file pointers.cpp
 * @brief 指针基础应用的实现
 * @ingroup grp_1_basics_files
 */

#include "chapter4.hpp"

namespace awesome_cpp::basics::chapter4 {
    void
    swap_by_pointer() {
        int   x{ 10 };
        int   y{ 20 };
        auto* lhs{ &x };
        auto* rhs{ &y };

        if (lhs == nullptr || rhs == nullptr) {
            throw std::invalid_argument("lhs or rhs is nullptr");
        }

        std::println("x is {}, y is {}", x, y);

        const auto temp = *lhs;
        *lhs            = *rhs;
        *rhs            = temp;
        std::println("x is {}, y is {}", x, y);

        auto**     llhs{ &lhs };
        auto**     rrhs{ &rhs };
        const auto temp_pointer = *llhs;
        *llhs                   = *rrhs;
        *rrhs                   = temp_pointer;
        std::println("x is {}, y is {}", **llhs, **rrhs);
    }

    void
    safe_print(const char* label, const int* p) {
        if (label == nullptr) {
            throw std::invalid_argument("label is nullptr");
        }
        std::println(
                  "{}",
                  label); /* CLion26.1.3 目前支持的clangd版本较低，显示报错 */

        if (p != nullptr) {
            std::println("*p is {}, and it's address is 0x{:x}", *p,
                         reinterpret_cast<std::uintptr_t>(p));
        } else {
            throw std::invalid_argument("p is nullptr");
        }
    }

    void
    pointers() {
        std::println("{:=^20}", "指针 SWAP");
        swap_by_pointer();
        std::println("{:=^20}", "空指针");
        constexpr int value{ 99 };
        safe_print("有效指针：", &value);
        try {
            safe_print("空指针：", static_cast<int*>(nullptr));
        } catch (const std::invalid_argument& e) {
            std::println("{}", e.what());
        }
    }

    void
    test_04_00_1_swap() {
        int   a{ 10 };
        int   b{ 20 };
        auto* lhs{ &a };
        auto* rhs{ &b };

        std::println("a is {}, it's addr is 0x{:x}", *lhs,
                     reinterpret_cast<uintptr_t>(lhs));

        std::println("b is {}, it's addr is 0x{:x}\n", *rhs,
                     reinterpret_cast<uintptr_t>(rhs));

        const auto temp = *lhs;
        *lhs            = *rhs;
        *rhs            = temp;

        std::println("a is {}, it's addr is 0x{:x}", *lhs,
                     reinterpret_cast<uintptr_t>(lhs));

        std::println("b is {}, it's addr is 0x{:x}", *rhs,
                     reinterpret_cast<uintptr_t>(rhs));
    }

    void
    test_04_00_2_tracking_ptr() {
        int  x = 10, y = 20;
        int* p = &x;
        int* q = &y;
        *p     = *q;
        p      = q;
        *p     = 30;
        std::println("x = {}, y = {}, *p = {}, *q = {}", x, y, *p, *q);
    }
}  // namespace awesome_cpp::basics::chapter4
