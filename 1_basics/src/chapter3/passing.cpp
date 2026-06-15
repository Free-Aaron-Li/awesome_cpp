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
 * @file passing.cpp
 * @brief 参数传递方式应用的实现
 * @ingroup grp_1_basics_files
 */

#include "chapter3.hpp"

namespace awesome_cpp::basics::chapter3 {
    auto
    swap_values(int& lhs, int& rhs) -> void {
        const int tmp{ lhs };
        lhs = rhs;
        rhs = tmp;
    }

    auto
    sum_by_value(BigData data) -> long {
        long total{ 0 };
        for (const int i: data.payload) {
            total += i;
        }
        return total;
    }

    auto
    sum_by_const_ref(const BigData& data) -> long {
        long total{ 0 };
        for (const int i: data.payload) {
            total += i;
        }
        return total;
    }

    auto
    build_greeting(const std::string& name) -> std::string {
        return "Hello, " + name + "! Welcome to Modern C++.";
    }

    auto
    passing() -> int {
        /* 1. swap 演示 */
        int a{ 10 };
        int b{ 20 };
        std::cout << "交换前，a = " << a << ", b = " << b << std::endl;
        swap_values(a, b);
        std::cout << "交换后，a = " << a << ", b = " << b << std::endl;

        /* 2. 性能对比 */
        BigData data{};
        for (int i = 0; i < 4096; ++i) {
            data.payload[i] = i;
        }

        constexpr int kIterations{ 100000 }; /* 迭代次数 */

        /* 值传递耗时计算 */
        auto start = std::chrono::high_resolution_clock::now();

        long result_value{ 0 };
        for (int i = 0; i < kIterations; ++i) {
            result_value = sum_by_value(data);
        }
        auto end      = std::chrono::high_resolution_clock::now();
        auto ms_value = std::chrono::duration_cast<std::chrono::milliseconds>(
                                  end - start)
                                  .count();

        /* 引用传递耗时计算 */
        start = std::chrono::high_resolution_clock::now();

        long result_ref{ 0 };
        for (int i = 0; i < kIterations; ++i) {
            result_ref = sum_by_const_ref(data);
        }
        end = std::chrono::high_resolution_clock::now();
        const auto ms_ref
                  = std::chrono::duration_cast<std::chrono::milliseconds>(
                              end - start)
                              .count();

        /* 注意：这里可能对比差距不是特别明显，这跟测试环境有很大关系
         * 例如：在 Debug 模式下，使用 Apple Silicon m5 芯片由于采用统一
         * 内存架构，测试数据能够直接放进缓存中，那么实际二者差距就在 2.1% 左右。
         */
        std::cout << "=== 性能对比 ===" << std::endl;
        std::cout << "在经过" << kIterations << "次迭代后，结果为："
                  << std::endl;
        std::cout << "值传递：结果为：" << result_value << "，耗时："
                  << ms_value << "ms" << std::endl;
        std::cout << "引用传递：结果为：" << result_ref << "，耗时：" << ms_ref
                  << "ms" << std::endl;

        /* 3. 字符串处理 */
        std::string name{ "Aaron" };
        std::cout << build_greeting(name) << std::endl; /* 允许直接传入字面值 */
        std::cout << build_greeting(std::string("World")) << std::endl;

        return 0;
    }

    auto
    test_03_01_1_swap_values(double& lhs, double& rhs) -> int {
        std::cout << "交换前，a = " << lhs << ", b = " << rhs << std::endl;

        const double tmp{ lhs };
        lhs = rhs;
        rhs = tmp;

        std::cout << "交换后，a = " << lhs << ", b = " << rhs << std::endl;
        return 0;
    }

    int
    test_03_01_1_swap_values(std::string& lhs, std::string& rhs) {
        std::cout << "交换前，a = " << lhs << ", b = " << rhs << std::endl;

        const std::string tmp{ lhs };
        lhs = rhs;
        rhs = tmp;

        std::cout << "交换后，a = " << lhs << ", b = " << rhs << std::endl;
        return 0;
    }

}  // namespace awesome_cpp::basics::chapter3
