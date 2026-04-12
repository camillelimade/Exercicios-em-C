cmake_minimum_required(VERSION 4.2)
project(Exercicios_em_C)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Atividade1)
include_directories(Atividade2)

add_executable(Exercicios_em_C
        Atividade1/q1.c
        Atividade1/q2.c
        Atividade1/q3.c
        Atividade1/q4.c
        Atividade1/q5.c
        Atividade2/q1.c
        Atividade2/q2.c
        .gitignore
        main.c
        README.md)
