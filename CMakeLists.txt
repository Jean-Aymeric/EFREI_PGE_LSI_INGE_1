cmake_minimum_required(VERSION 3.29)
project(Virtual2)

set(CMAKE_CXX_STANDARD 20)

add_executable(Virtual2 main.cpp
        Bar.cpp
        Bar.h
        Qux.cpp
        Qux.h
        Corge.cpp
        Corge.h
        Grault.cpp
        Grault.h
        Foo.cpp
        Foo.h
        Baz.cpp
        Baz.h
)
