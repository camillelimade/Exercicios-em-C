# Atividade 2 – Estruturas Condicionais e Problemas Aplicados
Este repositório contém a resolução de exercícios propostos na disciplina de Introdução à Programação, utilizando a linguagem C.

Os problemas desta atividade envolvem principalmente raciocínio lógico e uso de estruturas condicionais, com aplicação em cenários mais próximos de situações reais.

## Objetivo
Desenvolver a capacidade de resolução de problemas, utilizando lógica de programação e estruturas de decisão para tratar diferentes cenários.

## Questão 1 (15 pontos)
Simular o corte de uma nota de 50 reais em duas partes, determinando qual lado possui maior área.
Observações:
- Largura da nota: 160 
- Altura da nota: 70
- Calculo de área = Largura x Altura

O corte é definido por dois pontos:
- B: posição inicial na base
- T: posição final no topo

O programa deve informar:
- "Francisco" se o lado esquerdo for maior
- "Francisca" se o lado direito for maior
- ou indicar que nenhum possui valor (áreas iguais)

## Questão 2 (15 pontos)
Simular o parcelamento de uma compra.
Regras:
- Se o valor for divisível pelo número de parcelas, todas serão iguais
- Caso contrário, o restante da divisão deve ser distribuído nas primeiras parcelas

O programa deve imprimir o valor de cada parcela.

## Questão 3 (15 pontos)
Simular a fuga de um personagem em uma pista circular com 16 posições (0 a 15).
Entradas:
- H: posição do helicóptero
- P: posição do policial
- F: posição do fugitivo
- D: direção (-1 horário, 1 anti-horário)

O programa deve informar:
- "S" se o fugitivo consegue escapar
- "N" caso contrário

## Questão 4 (15 pontos)
Determinar a pontuação de um lançamento em um jogo, com base na distância até a cesta.

Regras:
- D ≤ 800 → 1 ponto
- 800 < D ≤ 1400 → 2 pontos
- 1400 < D ≤ 2000 → 3 pontos

O programa deve retornar a pontuação correspondente.

## Questão 5 (20 pontos)
Determinar em qual fase dois jogadores irão se enfrentar em uma chave de torneio.

Dados:
- 16 jogadores distribuídos em posições de 1 a 16
- Jogadores específicos devem ser rastreados ao longo das fases

O programa deve indicar se o confronto ocorrerá em:
- oitavas
- quartas
- semifinal
- final

## Questão 6 (20 pontos)
Verificar se há colisão entre dois retângulos no plano cartesiano.

Cada retângulo é definido por:
- canto inferior esquerdo (x0, y0)
- canto superior direito (x1, y1)

O programa deve identificar se existe interseção entre os dois retângulos.