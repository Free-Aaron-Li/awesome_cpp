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
 * @file print_number.cpp
 * @brief 数值类型打印实现
 * @ingroup grp_1_basics_files
 */


#include <iomanip>

#include "1_basics.hpp"

namespace awesome_cpp::basics::chapter1 {
    auto
    print_integer() -> int {
        std::cout << "=== 整数类型大小（字节）===" << std::endl;
        std::cout << "short    :            " << sizeof(short) << std::endl;
        std::cout << "int      :            " << sizeof(int) << std::endl;
        std::cout << "long     :            " << sizeof(long) << std::endl;
        std::cout << "long long:            " << sizeof(long long) << std::endl;
        std::cout << std::endl;

        std::cout << "=== 对应的无符号版本 ===" << std::endl;
        std::cout << "unsigned short    :   " << sizeof(unsigned short)
                  << std::endl;
        std::cout << "unsigned int      :   " << sizeof(unsigned int)
                  << std::endl;
        std::cout << "unsigned long     :   " << sizeof(unsigned long)
                  << std::endl;
        std::cout << "unsigned long long:   " << sizeof(unsigned long long)
                  << std::endl;
        std::cout << std::endl;

        std::cout << "=== 固定宽度类型大小（字节）===" << std::endl;
        std::cout << "int8_t  :             " << sizeof(int8_t) << std::endl;
        std::cout << "int16_t :             " << sizeof(int16_t) << std::endl;
        std::cout << "int32_t :             " << sizeof(int32_t) << std::endl;
        std::cout << "int64_t :             " << sizeof(int64_t) << std::endl;
        std::cout << std::endl;

        std::cout << "uint8_t :             " << sizeof(uint8_t) << std::endl;
        std::cout << "uint16_t:             " << sizeof(uint16_t) << std::endl;
        std::cout << "uint32_t:             " << sizeof(uint32_t) << std::endl;
        std::cout << "uint64_t:             " << sizeof(uint64_t) << std::endl;
        std::cout << std::endl;

        /*
        std::cout << "=== int32_t 的范围 ===" << std::endl;
        std::cout << "最小值：" << std::numeric_limits<int32_t>::min()
                  << std::endl;
        std::cout << "最大值：" << std::numeric_limits<int32_t>::max()
                  << std::endl;
        std::cout << std::endl;
        std::cout << "=== uint32_t 的范围 ===" << std::endl;
        std::cout << "最小值：" << std::numeric_limits<uint32_t>::min()
                  << std::endl;
        std::cout << "最大值：" << std::numeric_limits<uint32_t>::max()
                  << std::endl;
        std::cout << std::endl;*/

        print_type_range<short>("short");
        print_type_range<int>("int");
        print_type_range<long>("long");
        print_type_range<long long>("long long");
        print_type_range<unsigned short>("unsigned short");
        print_type_range<unsigned int>("unsigned int");
        print_type_range<unsigned long>("unsigned long");
        print_type_range<unsigned long long>("unsigned long long");
        print_type_range<int8_t>("int8_t");
        print_type_range<int16_t>("int16_t");
        print_type_range<int32_t>("int32_t");
        print_type_range<int64_t>("int64_t");
        print_type_range<uint8_t>("uint8_t");
        print_type_range<uint16_t>("uint16_t");
        print_type_range<uint32_t>("uint32_t");
        print_type_range<uint64_t>("uint64_t");
        print_type_range<float>("float");
        print_type_range<double>("double");
        return 0;
    }


    auto
    float_comparison() -> int {

        constexpr float a{ 0.1f };
        constexpr float b{ 0.2f };
        constexpr float c{ a + b };

        std::cout << std::setprecision(20);
        std::cout << "a: 0.1f = " << a << std::endl;
        std::cout << "b: 0.2f = " << b << std::endl;
        std::cout << "a + b   = " << c << std::endl;
        std::cout << "0.3f    = " << 0.3f << std::endl;
        std::cout << std::endl;

        if constexpr (c == 0.3f) {
            std::cout << "a + b == 0.3f" << std::endl;
        }
        else {
            std::cout << "a + b != 0.3f" << std::endl;
            std::cout << "差值：" << (c - 0.3f) << std::endl;
        }
        return 0;
    }

    auto
    is_approximately_equal(const double lval, const double rval,
                           const double absolute_epsilon,
                           const double relative_epsilon) -> bool {
        const double diff{ std::abs(lval - rval) };

        /* 绝对误差：适合比较接近 0 的值 */
        if (diff <= absolute_epsilon) {
            return true;
        }

        /* 相对误差：适合比较数值较大的值 */
        return (diff
                <= std::max(std::abs(lval), std::abs(rval)) * relative_epsilon);
    }

    int
    print_char() {
        constexpr char          c{ 'A' };
        constexpr signed char   sc{ -1 };
        constexpr unsigned char uc{ 255 };

        std::cout << "char 'A' 的整数值：" << static_cast<int>(c) << std::endl;
        std::cout << "signed char -1 的整数值：" << static_cast<int>(sc)
                  << std::endl;
        std::cout << "unsigned char 255 的整数值：" << static_cast<int>(uc)
                  << std::endl;

        return 0;
    }

    int
    print_bool() {
        constexpr bool flag{ true };
        constexpr int  count{ flag + flag + flag };

        /* true 参与运算时当作 1，false 当作 0 */
        std::cout << "true+true+true = " << count << std::endl;
        std::cout << "sizeof(bool)   = " << sizeof(bool) << std::endl;

        return 0;
    }

    int
    sizeof_all() {
        std::cout << "=== 基本类型 sizeof 汇总===" << std::endl;
        std::cout << "sizeof(bool)   = " << sizeof(bool) << std::endl;
        std::cout << "sizeof(char)   = " << sizeof(char) << std::endl;
        std::cout << "sizeof(short)  = " << sizeof(short) << std::endl;
        std::cout << "sizeof(int)    = " << sizeof(int) << std::endl;
        std::cout << "sizeof(long)   = " << sizeof(long) << std::endl;
        std::cout << "sizeof(long long) = " << sizeof(long long) << std::endl;
        std::cout << "sizeof(float)  = " << sizeof(float) << std::endl;
        std::cout << "sizeof(double) = " << sizeof(double) << std::endl;
        /* 在 macOS Silicon 中 long double 为 8 字节 */
        std::cout << "sizeof(long double) = " << sizeof(long double)
                  << std::endl;

        std::cout << std::endl;
        std::cout << "=== 测试特殊类型 sizeof ===" << std::endl;
        std::cout << "sizeof('A') = " << sizeof('A') << std::endl;
        std::cout << "sizeof(true) = " << sizeof(true) << std::endl;
        std::cout << "sizeof(3.14) = " << sizeof(3.14) << std::endl;
        std::cout << "sizeof(3.14f) = " << sizeof(3.14f) << std::endl;
        std::cout << "sizeof(3.14L) = " << sizeof(3.14L) << std::endl;

        std::cout << std::endl;

        /* 测试 C 语言下字符字面值大小 */
        test_sizeof_in_c();

        return 0;
    }
    int
    float_precision_pitfalls() {
        float  value_float{ 0.0f };
        double value_double{ 0.0l };

        std::cout << std::setprecision(20);
        std::cout << "value_float  = " << value_float << std::endl;
        std::cout << "value_double = " << value_double << std::endl;

        for (int i = 0; i <= 10; ++i) {
            value_float += 0.1f;
            value_double += 0.1l;
            std::cout << "第 " << i << " 次累加后，value_float 值为："
                      << value_float << "，value_double 值为：" << value_double
                      << std::endl;
        }

        std::cout << std::endl;

        std::cout << "最终 value_float 值为：" << value_float << std::endl;
        std::cout << "1.0f 值为     ：" << 1.0f << std::endl;

        if (is_approximately_equal(value_float, 1.0f)) {
            std::cout << "value_float == 1.0f" << std::endl;
        }
        else {
            std::cout << "value_float != 1.0f" << std::endl;
            std::cout << "差值为：" << (value_float - 1.0f) << std::endl;
        }

        std::cout << std::endl;

        std::cout << "最终 value_double 值为：" << value_double << std::endl;
        std::cout << "1.0l 值为              ：" << 1.0l << std::endl;

        if (is_approximately_equal(value_double, 1.0l)) {
            std::cout << "value_double == 1.0l" << std::endl;
        }
        else {
            std::cout << "value_double != 1.0l" << std::endl;
            std::cout << "差值为：" << (value_double - 1.0l) << std::endl;
        }
        return 0;
    }
}  // namespace awesome_cpp::basics::chapter1
