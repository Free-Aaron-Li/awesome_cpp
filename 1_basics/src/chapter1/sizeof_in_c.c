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
 * @file sizeof_in_c.c
 * @brief C 语言字符字面值大小测试
 * @ingroup grp_1_basics_files
 */

#include <stdio.h>

/**
 * @brief 测试 C 语言下字符字面值大小
 *
 * @note
 * 在 C 语言中，字符字面量（如 'A'）的类型是 int。
 * 因此 sizeof('A') 等于 sizeof(int)，通常是 4 字节。
 *
 * 该函数将被 C++ 代码调用，以展示 C 语言环境下 sizeof('A') 的结果。
 *
 * @return int - 函数状态值
 * @ingroup grp_1_basics_code
 * @ingroup grp_test_problems
 */
int
test_01_00_2_test_sizeof_in_c(void) {
    printf("--- 从 C 文件中测试 ---\n");
    printf("sizeof('A') 在 C 中 = %zu\n", sizeof('A'));
    printf("sizeof(char) 在 C 中 = %zu\n", sizeof(char));
    printf("sizeof(int) 在 C 中  = %zu\n", sizeof(int));
    return 0;
}
