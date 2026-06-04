add_executable(1_basics
        src/main.cpp
        include/1_basics.hpp
        src/chapter0/calc.cpp
        src/chapter0/age.cpp
        src/chapter0/convert.cpp
)

target_include_directories(1_basics
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(1_basics
        c++
        c++abi
)

target_compile_options(1_basics
        PRIVATE
        -Wall
        -Wextra
        -Wpedantic
)
