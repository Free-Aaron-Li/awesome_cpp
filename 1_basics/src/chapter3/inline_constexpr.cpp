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
 * @file inline_constexpr.cpp
 * @brief 重载与默认参数应用的实现
 * @ingroup grp_1_basics_files
 */

#include "chapter3.hpp"

namespace awesome_cpp::basics::chapter3 {
    uint8_t
    compute_crc8(const uint8_t* data, const size_t length) {
        uint8_t        crc{ 0 };
        constexpr auto kCrc8Table{ make_crc8_table() };
        for (size_t i = 0; i < length; ++i) {
            crc = kCrc8Table[crc ^ data[i]];
        }
        return crc;
    }

    void
    inline_constexpr() {
        /* 1. 编译器验证 */
        printf("=== 编译期计算结果 ===\n");
        static_assert(square(5) == 25, "square(5) != 25");
        static_assert(square(-3) == 9, "square(-3) != 9");
        static_assert(fib(5) == 120, "fib(5) != 120");
        static_assert(fib(10) == 3628800, "fib(10) != 3628800");
        static_assert(power(2, 10) == 1024, "power(2,10) != 1024");

        /* 2. CRC8 计算 */
        printf("\n=== 运行时 CRC8 计算 ===\n");
        uint8_t       test_data[]{ 0x01, 0x02, 0x03, 0x04, 0x05 };
        const uint8_t crc{ compute_crc8(test_data, sizeof(test_data)) };
        printf("CRC8 of {01,02,03,04,05} is 0x%02X\n", crc);

        /* 3. 对比 */
        printf("\n=== 编译期与运行时结果对比 ===\n");
        constexpr auto kCompileTime{ square(7) };
        constexpr auto kRunTimeInput{ 7 };
        constexpr auto kRunTimeResult{ square(kRunTimeInput) };
        printf("constexpr square(7) = %d\n", kCompileTime);
        printf("runtime square(7) = %d\n", kRunTimeResult);
        printf("constexpr square(7) == runtime square(7)? %s\n",
               kCompileTime == kRunTimeResult ? "true" : "false");
    }
}  // namespace awesome_cpp::basics::chapter3
