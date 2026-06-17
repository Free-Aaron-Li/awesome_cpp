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
 * @file overload.cpp
 * @brief 重载与默认参数应用的实现
 * @ingroup grp_1_basics_files
 */

#include "chapter3.hpp"

namespace awesome_cpp::basics::chapter3 {
    auto
    print(const int value) -> void {
        std::printf("int: %d\n", value);
    }

    auto
    print(const double value) -> void {
        std::printf("double: %.2f\n", value);
    }

    void
    print(const char* str) {
        std::printf("string: %s\n", str);
    }

    auto
    draw_rect(const int width, const int height, const bool fill,
              const char brush) -> void {
        std::printf("绘制矩形：%dx%d, fill=%s, brush= '%c'\n", width, height,
                    fill ? "true" : "false", brush);
    }

    void
    scale_value(const int value) {
        std::printf("原始值：%d\n", value);
    }

    void
    scale_value(const int value, const int factor) {
        std::printf("缩放后：%d (factor=%d)\n", value, factor);
    }

    int
    overload() {
        /* 1. 重载 */
        std::printf("=== 函数重载 ===\n");
        print(42);
        print(3.14159);
        print("Hello, overloading!");

        /* 2. 默认参数 */
        std::printf("\n=== 默认参数 ===\n");
        draw_rect(10, 5);
        draw_rect(10, 5, true);
        draw_rect(100, 100, true, ' ');

        /* 3. 重载+不同参数 */
        std::printf("\n=== 不同参数数量 ===\n");
        scale_value(7);
        scale_value(7, 3);

        return 0;
    }

    int
    test_03_02_1_max_value(const int value1, const int value2) {
        printf("%d 与 %d 谁更大？%d\n", value1, value2,
               value1 > value2 ? value1 : value2);
        return 0;
    }

    int
    test_03_02_1_max_value(const double value1, const double value2) {
        printf("%.1f 与 %.1f 谁更大？%.1f\n", value1, value2,
               value1 > value2 ? value1 : value2);
        return 0;
    }

    int
    test_03_02_1_max_value(const char* value1, const char* value2) {
        /* 比较字典序 */
        printf("“%s” 与 “%s” 谁更大？“%s”", value1, value2,
               value1 > value2 ? value1 : value2);
        return 0;
    }

    void
    test_03_02_2_log_message(const char* text, const char* level,
                             const bool show_timestamp) {
        printf("\n-----------------------\n");
        printf("text: %s\n", text);
        printf("level: %s\n", level);
        printf("show_timestamp: %s", show_timestamp ? "true" : "false");
        printf("\n-----------------------\n");
    }

    void
    test_03_02_3_func(const int x) {
        printf("int x = %d\n", x);
    }

    void
    test_03_02_3_func(const short x) {
        printf("short x = %d\n", x);
    }


}  // namespace awesome_cpp::basics::chapter3
