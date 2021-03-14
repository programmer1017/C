cmake_minimum_required(VERSION 3.17)
project(C C)

set(CMAKE_C_STANDARD 11)

add_executable(C
        "src/Hello, World!/main.c"
        src/input/C_to_F/input.c
        src/input/If_statement/if_2nd/main.c
        src/input/If_statement/if.c
        src/Variables/main.c)
