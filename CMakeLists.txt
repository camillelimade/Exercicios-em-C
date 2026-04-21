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
        main.c
        Atividade3/lousa1.c
        Atividade3/ImprimaZeroaDez.c
        Atividade3/resposta1.c
        Atividade3/resposta2.c
        Atividade3/resposta3.c
        Atividade3/lousa2.c
        Atividade3/resposta4.c
        Atividade2/q3.c
        Atividade2/q4.c
        Atividade2/q5.c
        Atividade2/q6.c
        Atv3Agora/problemaUm.c
        Atv3Agora/problemaDois.c
        Atv3Agora/problemaTres.c
        Atv3Agora/problemaQuatro.c
        Atv3Agora/problemaCinco.c
        Atv3Agora/problemaSeis.c
)
