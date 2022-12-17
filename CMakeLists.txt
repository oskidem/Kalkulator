cmake_minimum_required(VERSION 3.23)
project(Kalkulator C)

set(CMAKE_C_STANDARD 99)

add_executable(Kalkulator main.c dodawanie.c dodawanie.h odejmowanie.c odejmowanie.h mnozenie.c mnozenie.h)
