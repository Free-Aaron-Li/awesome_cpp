# AweSome CPP

一个旨在学习和演示现代 C++（Modern C++）特性的开源项目。

## 项目简介

本项目包含了从 C++ 基础到高级特性的示例代码，从零开始【的异世界生活:)】学习 C++。所有代码均附带详尽的 Doxygen
风格注释，方便通过文档深入理解代码背后的原理。

## 环境要求

- **CMake**: 最低版本要求 4.2
- **编译器**: 需要支持 C++23 的编译器（推荐 GCC 15+, Clang 22+）
- **Doxygen**: 用于从源代码注释中生成项目文档

## 项目结构

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

## 如何构建

1. **克隆项目**:
   ```bash
   git clone <repository-url>
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

## 文档生成

项目使用 Doxygen 生成技术文档。要生成文档，请在项目根目录下运行：

```bash
doxygen doxygen_tools/Doxyfile
```

生成的文档将保存在 `doxygen/html` 目录中。您可以打开 `doxygen/html/index.html` 在浏览器中查看。

## 许可证

本项目遵循 [GNU General Public License v3.0](LICENSE) 开源协议。
