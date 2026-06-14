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
 * @file conditional.cpp
 * @brief 条件语句应用的实现
 * @ingroup grp_1_basics_files
 */

#include "chapter2.hpp"

namespace awesome_cpp::basics::chapter2 {
    auto
    grade_by_if(const int score) -> char {
        if (score >= 90) {
            return 'A';
        } else if (score >= 80) {
            return 'B';
        } else if (score >= 70) {
            return 'C';
        } else if (score >= 60) {
            return 'D';
        } else {
            return 'F';
        }
    }

    auto
    grade_by_switch(const int score) -> char {
        switch (score / 10) {
            case 10:
            case 9: return 'A'; /* fall-through */
            case 8: return 'B';
            case 7: return 'C';
            case 6: return 'D';
            default: return 'F';
        }
    }

    auto
    conditional() -> int {
        int score{ 0 };
        std::cout << "请输入成绩（0-100）：";

        if (!(std::cin >> score)) {
            std::cout << "输入错误！" << std::endl;
            return -1;
        }

        if (score < 0 || score > 100) {
            std::cout << "输入错误！" << std::endl;
            return 0;
        }

        char grade = grade_by_if(score);
        std::cout << "if-else 判定结果：成绩为：" << score << "，等级为："
                  << grade << std::endl;

        grade = grade_by_switch(score);
        std::cout << "switch 判定结果：成绩为：" << score << "，等级为："
                  << grade << std::endl;

        if (const auto diff = score - 60; diff >= 0) {
            std::cout << "成绩大于等于60分，差值为：" << diff << std::endl;
        } else {
            std::cout << "成绩低于60分，距离及格线差还：" << -diff << std::endl;
        }

        return 0;
    }

    auto
    test_02_00_1_determine_num() -> int {
        int num{ 0 };
        std::cout << "请输入一个数字：";

        if (!(std::cin >> num)) {
            std::cout << "输入错误！" << std::endl;
            return -1;
        }

        std::cout << "if-else 判定结果：";
        if (const auto diff = num - 0; diff >= 0) {
            if (diff == 0) {
                std::cout << num << " 是0" << std::endl;
            } else {
                std::cout << num << " 是正数" << std::endl;
            }
        } else {
            std::cout << num << " 是负数" << std::endl;
        }

        std::cout << "三元运算符判定结果：";
        num >= 0 ? (num == 0 ? std::cout << num << " 是0" << std::endl
                             : std::cout << num << " 是正数" << std::endl)
                 : std::cout << num << " 是负数" << std::endl;


        return 0;
    }

    auto
    test_02_00_2_simple_calc() -> int {
        int  lhs{ 0 };
        int  rhs{ 0 };
        char op{};
        std::cout << "请输入表达式（如 3+5）：";

        if (!(std::cin >> lhs >> op >> rhs)) {
            std::cout << "输入错误！" << std::endl;
            return -1;
        }

        switch (op) {
            case '+': std::cout << lhs + rhs << std::endl; break;
            case '-': std::cout << lhs - rhs << std::endl; break;
            case '*': std::cout << lhs * rhs << std::endl; break;
            case '/': {
                if (rhs == 0) {
                    std::cout << "错误：除数不能为零！" << std::endl;
                    return -1;
                }
                std::cout << lhs / rhs << std::endl;
                break;
            }
            default: std::cout << "输入字符错误！" << std::endl;
        }

        return 0;
    }

    auto
    test_02_00_3_date_check() -> int {
        int year{ 0 };
        int month{ 0 };
        int day{ 0 };

        std::cout << "请输入年月日（如 2023 12 31）：";
        if (!(std::cin >> year >> month >> day)) {
            std::cout << "输入错误！" << std::endl;
            return -1;
        }

        std::cout << "输入值为：" << year << "年" << month << "月" << day
                  << "日" << std::endl;

        if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31) {
            std::cout << "输入错误！" << std::endl;
            return -1;
        }

        switch (month) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12: {
                if (day <= 31) {
                    std::cout << "日期合法！" << std::endl;
                    return 0;
                }
            }
            case 4:
            case 6:
            case 9:
            case 11: {
                if (day <= 30) {
                    std::cout << "日期合法！" << std::endl;
                    return 0;
                }
            }
            case 2: {
                if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
                    if (day <= 29) {
                        std::cout << "日期合法！" << std::endl;
                        return 0;
                    }
                } else {
                    if (day <= 28) {
                        std::cout << "日期合法！" << std::endl;
                        return 0;
                    }
                }
            }
            default: std::cout << "日期不合法！" << std::endl;
        }

        return 0;
    }


}  // namespace awesome_cpp::basics::chapter2
