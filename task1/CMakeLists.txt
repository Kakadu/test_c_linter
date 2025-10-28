cmake_minimum_required(VERSION 3.10)
project(MySimpleCProgram C)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
# add_executable(my_program main.c)
add_library(mylib fac.c)

enable_testing()
add_executable(TestInstantiator TestInstantiator.c)
target_link_libraries(TestInstantiator mylib cunit)
add_test(NAME TestInstantiator
         COMMAND TestInstantiator)