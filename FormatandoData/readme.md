#Vetor interativo

Faça um código que receba um char de ação e insira e remova elementos de uma lista.

    ##Opções
        -a: insere vários elementos no vetor
            a qtd _valor _valor ...
        -i: insere em uma posição do vetor
            i _pos _valor
        -r: remove de uma posição do vetor
            r _pos
        -s: mostrar vetor no formato [ v1 v2 v3 ]
        -q: encerra a execução
    ##Entrada
        -se opção for a ou A receba um valor a ser inserido.
            Ex: a 5, insere o 5 no final
        -se opção for i ou s
            Ex: i 1 7, insere o 7 na posição 1
    ##Saída
        mostrar o vetor para cada opção s aparecer.

    >>>>>>>>
sMotivação

Os formatos de data e hora são diversos. Leia hora, minuto, dia, mês e ano e imprima no formato hh:mm dd/mm/aa. Você deve certificar-se de imprimir um 0 à esquerda para garantir que todas as informações tenham 2 dígitos. A hora de entrada poderá aparecer no formato 24 horas, mas apresente-a na saída no formato 12h.
Entrada:

    hora, minuto, dia, mês e ano, um por linha.

Saída:

    hh:mm dd/mm/aa, sendo hora de 0 a 11.

Exemplos

    >>>>>>>> 01
    4
    12
    12
    3
    1988
    ========
    04:12 12/03/88
    <<<<<<<<

    >>>>>>>> 02
    14
    7
    7
    9
    2005
    ========
    02:07 07/09/05
    <<<<<<<<

    >>>>>>>> 03
    24
    1
    1
    1
    2076
    ========
    00:01 01/01/76
    <<<<<<<<

Ajuda

Em C você pode imprimir zeros à esquerda informando quantas casas decimais você deseja obter na parte inteira.

O comando printf(“%03d”, value) imprime a variável value e se ela menos de 3 dígitos, completa com zeros à esquerda.

Você pode usar o operador de módulo para quebrar a parte da informação de você precisa para pegar apenas a hora ou a dezena e unidade do ano.

q
========
[ ]
<<<<<<<<

>>>>>>>>
a 4 11 10 12 18
s
q
========
[ 11 10 12 18 ]
<<<<<<<<

>>>>>>>>
a 4 11 10 12 18
s
i 0 13
s
q
========
[ 11 10 12 18 ]
[ 13 11 10 12 18 ]
<<<<<<<<

>>>>>>>>
a 4 11 10 12 18
s
i 0 13
s
i 1 17
s
i 5 21
s
q
========
[ 11 10 12 18 ]
[ 13 11 10 12 18 ]
[ 13 17 11 10 12 18 ]
[ 13 17 11 10 12 21 18 ]
<<<<<<<<

>>>>>>>>
a 5 17 11 10 12 18
s
r 0
s
r 1
s
r 1
s
r 0
s
q
========
[ 17 11 10 12 18 ]
[ 11 10 12 18 ]
[ 11 12 18 ]
[ 11 18 ]
[ 18 ]
<<<<<<<<
