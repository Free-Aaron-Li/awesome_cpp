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

#include "chapter1.hpp"

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
    test_01_00_3_float_comparison() -> int {

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
        } else {
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
    test_01_00_1_sizeof_all() {
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
        test_01_00_2_test_sizeof_in_c();

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
        } else {
            std::cout << "value_float != 1.0f" << std::endl;
            std::cout << "差值为：" << (value_float - 1.0f) << std::endl;
        }

        std::cout << std::endl;

        std::cout << "最终 value_double 值为：" << value_double << std::endl;
        std::cout << "1.0l 值为              ：" << 1.0l << std::endl;

        if (is_approximately_equal(value_double, 1.0l)) {
            std::cout << "value_double == 1.0l" << std::endl;
        } else {
            std::cout << "value_double != 1.0l" << std::endl;
            std::cout << "差值为：" << (value_double - 1.0l) << std::endl;
        }
        return 0;
    }

    int
    type_conversion() {
        /* 赋值转换：double -> int，小数部分直接截断 */
        constexpr double pi{ 3.14159 };
        constexpr int    truncated = pi;
        std::cout << "3.14159 -> int = " << truncated << std::endl;

        /* 算术转换：int + double -> double */
        constexpr int    i{ 5 };
        constexpr double d{ 2.5 };
        constexpr auto   result = i + d;
        std::cout << "5 + 2.5 = " << result << " (double)" << std::endl;

        /* 布尔类型：零 -> false，零以外的任何值 -> true */
        constexpr bool zero{ 0 };
        constexpr bool non_zero = -3;
        std::cout << "零 -> " << zero << std::endl;
        std::cout << "非零 -> " << non_zero << std::endl;

        /* 无符号转换 */
        constexpr int          a{ -1 };
        constexpr unsigned int b = a;
        std::cout << "a = " << a << " -> b = " << b << std::endl;

        /* 溢出 */
        short s = 32767; /* short 的最大值为16位 */
        s += 1;          /* s = -32768，赋值回 short 时发生截断 */
        std::cout << "s = " << s << std::endl;

        /* static_cast：普通类型转换 */
        constexpr int    i1{ 42 };
        constexpr double d1{ static_cast<double>(i1) };
        constexpr double pi1{ 3.14159 };
        constexpr int    truncated1{ static_cast<int>(pi1) };

        std::cout << "i1 = " << i1 << " -> d1 = " << d1 << std::endl;
        std::cout << "pi1 = " << pi1 << " -> truncated1 = " << truncated1
                  << std::endl;

        /* reinterpret_cast：重新解释底层的位模式 */
        {
            /* 场景一：void* 与类型指针之间的转换 */
            int   val{ 100 };
            void* pv{ &val };
            int*  pvi{ reinterpret_cast<int*>(pv) };
            std::cout << "void* -> *pvi = " << *pvi << std::endl;

            /* 场景二：查看浮点数的底层位模式 */
            float f{ 1.0f };
            /* 注意这里犯严重的C++严格别名规则，可能导致未定义行为 */
            const uint32_t reinterpret_cast_convertion
                      = reinterpret_cast<uint32_t&>(f);
            /* 这里意思是直接将f的4个字节拷贝至uint32_t对象上 */
            const uint32_t bit_cast_convertion{ std::bit_cast<uint32_t>(f) };
            std::cout << std::hex;
            std::cout << "reinterpret_cast_convertion = "
                      << reinterpret_cast_convertion << std::endl;
            std::cout << "bit_cast_convertion = " << bit_cast_convertion
                      << std::endl;
        }

        /* 数值精度 */
        {
            /* 场景一：整数除法陷阱 */
            constexpr double result1{ 5 / 2 };
            constexpr double result2{ static_cast<double>(5) / 2 };
            std::cout << "5/2 = " << result1 << std::endl;
            std::cout << "static_cast<double>(5)/2 = " << result2 << std::endl;

            /* 场景二：浮点数比较的不可靠性 */
            constexpr double a1{ 0.1 + 0.2 };
            constexpr double a2{ 0.3 };
            std::cout << std::boolalpha;
            std::cout << "a1 == a2：" << (a1 == a2) << std::endl;

            /* 正确做法 */
            std::cout << "a1 == a2：" << is_approximately_equal(a1, a2)
                      << std::endl;

            /* 场景三：整数溢出 */
            constexpr int max_int{ INT_MAX };
            std::cout << std::dec;
            /* 未定义行为 */
            std::cout << "overflow_int = " << max_int + 1 << std::endl;

            constexpr unsigned char uc{ 255 };
            std::cout << "overflow_uc = " << static_cast<int>(uc + 1)
                      << std::endl;
        }

        return 0;
    }

    int
    test_01_01_3_saft_temperature_conversion() {
        std::cout << std::fixed << std::setprecision(1);
        std::cout << std::dec;
        std::cout << "请输入摄氏温度：";
        double celsius{};
        std::cin >> celsius;
        std::cout << celsius << " C = " << celsius * 9 / 5 + 32 << " F"
                  << std::endl;

        /* 这里我并不需要 static_cast，暂时没想到这个关键字该用在那个地方。 */
        return 0;
    }
}  // namespace awesome_cpp::basics::chapter1
