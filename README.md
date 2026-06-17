# AweSome CPP

一个旨在学习和演示现代 C++（Modern C++）特性的开源项目。

## 1. 项目简介

本项目包含了从 C++ 基础到高级特性的示例代码，从零开始【的异世界生活:)】学习 C++。所有代码均附带详尽的 Doxygen
风格注释，方便通过文档深入理解代码背后的原理。

## 2. 环境要求

- **CMake**: 最低版本要求 4.2
- **编译器**: 需要支持 C++23 的编译器（推荐 GCC 15+, Clang 22+）
- **Doxygen**: 用于从源代码注释中生成项目文档

## 3. 项目结构

```txt
.
├── 1_basics         # C++ 基础语法示例
│ ├── chapter0       # 第零章：环境搭建与第一个程序
│ └── chapter1       # 第一章：类型与值类别
├── doxygen_tools    # Doxygen 相关辅助工具
├── .clang-format    # Clang-format 格式化配置文件
├── .gitignore       # git 忽略文件配置
├── CMakeLists.txt   # 项目根构建文件
├── LICENSE          # 版权声明
└── README.md        # 项目说明
```

## 4. 如何构建

1. **克隆项目**:
   ```bash
   git clone https://github.com/Free-Aaron-Li/awesome_cpp.git
   cd awesome-cpp
   ```

2. **使用 CMake 构建**:
   ```bash
   cmake -B build -S .
   cmake --build build -j${nproc}
   ```

3. **运行程序**:
   ```bash
   ./bin/1_basics
   ```

## 5. 关于文档

运行该程序会自动生成 `Doxygen` 文档，查看文档请通过 `doxygen/html/index.html`。

如希望手动生成文档，请在顶层目录下使用命令：

```bash
doxygen doxygen_tools/Doxyfile
```

如果希望查看 `Doxygen` 与默认配置区别，请通过命令：

```bash
doxygen -x doxygen_tools/Doxyfile
```

## 6. 关于引用

本项目很大程度参考：[Tutorial_AwesomeModernCPP](https://github.com/Awesome-Embedded-Learning-Studio/Tutorial_AwesomeModernCPP)。

上述项目非常适合有一定 C++ 基础但是并未形成整体框架的开发者学习，本项目也主要是通过阅读该项目自己整理归纳 C++ 学习过程。

## 7. 许可证

本项目遵循 [GNU General Public License v3.0](LICENSE) 开源协议。
