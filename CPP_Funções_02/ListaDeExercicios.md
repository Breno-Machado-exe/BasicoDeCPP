Exercicios de Função

1.
a) Escreva uma função que recebe dois números
inteiros e imprime a soma, o produto, a diferença, o
quociente e o resto entre esses dois números.
b) Faça um programa em C++ (função principal)
que leia dois inteiros do teclado e chame a função
da letra a).
c) Teste seu programa com os valores 11 e 3.

2.
a) Elabore uma função que receba três valores
reais e retorne a média aritmética destes valores.
b) Em seguida, faça um programa (função
principal) que leia três valores do teclado e imprima
sua média, utilizando a função da letra a).
c) Teste seu programa com os valores 2, 6 e 7.

3.
Considerando a fórmula para o cálculo da
distância entre dois pontos (x1, y1) e (x2, y2):
a) Escreva uma função que receba como
parâmetros as coordenadas de dois pontos e retorne
a distância entre eles.
b) Escreva um programa em C++ (função principal)
que leia do teclado as coordenadas dos 3 vértices
de um triângulo, calcule e imprima o perímetro deste
triângulo, chamando a função anterior.
c) Teste seu programa, simulando sua execução
com as seguintes coordenadas: (4,1), (1,1), (4,5).

4.
a) Considerando Pi = 3,14159, para cada opção
abaixo, escreva uma função que recebe como
parâmetro o raio de um círculo e:
▪ retorne seu diâmetro;
▪ retorne sua circunferência;
▪ retorne sua área;
▪ imprima o diâmetro, a circunferência e a área
chamando as funções anteriores.

b) Elabore um programa que leia do teclado o valor
do raio de dois círculos e, para cada círculo, chame a
função que imprime as informações.
c) Teste seu programa com os valores 1 e 3.

5.
Faça um programa para calcular quantas
latas de verniz serão necessárias para cobrir um
deque de madeira. O usuário do programa
informará a largura e o comprimento da superfície a
ser coberta e o programa deverá imprimir o número
de latas necessárias (valor inteiro), dado que cada
lata de verniz cobre até 3 m2

de superfície. 

O programa deverá ter no mínimo 3 funções. Teste o
programa calculando o necessário para cobrir uma
superfície de 4.5 x 5m.
Observação: tente identificar as tarefas que poderão
constituir diferentes funções e, para cada tarefa,
especifique os dados de entrada (parâmetros)
necessários para sua execução e defina se esta
tarefa produzirá ou não um resultado (retorno).

6.

Faça uma função que receba como parâmetros o
valor de uma compra e o número de parcelas e
imprima o valor da parcela a ser paga a prazo.
Ao ser executada em um programa com as entradas
3530.8 e 14, sua função deverá imprimir:

COMPRA A PRAZO
Valor da compra: R$ 3530.8
Numero de parcelas: 14
Valor da parcela a prazo: R$ 252.20

7.
Faça uma função que receba por parâmetro um
tempo expresso em segundos e imprima na tela
esse mesmo tempo em horas, minutos e segundos.
Elabore também um programa para ler este valor do
teclado e chamar a função.
Para a entrada 13579, o programa deverá imprimir:

CONVERSAO DE SEGUNDOS EM HORAS, MINUTOS E SEGUNDOS
Tempo total em segundos: 13579
Equivale a: 3 horas, 46 minutos e 19 segundos

8.
Considerando o critério de aprovação de uma
disciplina que determina que um aluno está aprovado
se a média ponderada de suas três provas for maior
ou igual a 5.0, onde a média é dada pela fórmula:

media = (p1 + p2 + 2.0 * p3) / 4.0

a) Escreva uma função que receba como parâmetros
as notas das duas primeiras provas de um aluno (p1
e p2) e retorne a nota mínima que o aluno precisa
na terceira prova para que seja aprovado.
b) Escreva um programa que leia do teclado as duas
primeiras notas de um aluno, chame a função do
item anterior e imprima a nota mínima que o aluno
precisa tirar na p3 para que seja aprovado.

CALCULO DE NOTA PARA APROVACAO
Nota na 1a prova: 5.5
Nota na 2a prova: 3.5
Nota necessaria: 5.50

9.
A empresa CDA produz caixas-d’água para casas,
prédios, indústrias, etc. Por atender clientes com
características bastante distintas, a CDA constrói as caixas d’
água sob encomenda, permitindo que cada cliente especifique
as medidas desejadas (largura, altura e profundidade)
conforme sua necessidade. Há algum tempo, os diretores da
empresa notaram que alguns funcionários têm dificuldade na
hora de calcular o preço do produto quando um orçamento é
solicitado. Por isso, contrataram você para construir um
programa que calcule o preço de uma caixa d’água (sem
tampa) dadas as suas dimensões.
O preço varia de acordo com a espessura da “parede” da
caixa-d’água, que, por sua vez, varia com o volume de água
armazenado:
• Se a caixa-d’água armazena menos que 1 metro cúbico de água,
precisa ter a espessura mínima de 0.8 cm.
• A cada 1 metro cúbico (ou fração) adicional, a espessura precisa ser
aumentada em 0.3 cm.
• O preço de uma superfície de 1 metro quadrado corresponde a
R$45,00 vezes a espessura (em cm).

10.
a) Construa uma função para calcular o volume de água que a
caixa encomendada pode armazenar. A função deve receber
como parâmetros as medidas desejadas e retornar o volume.
b) Construa uma função que receba como parâmetro o volume de
água e calcule e retorne a espessura mínima que a caixa deve
ter. Você pode usar a função ceil da biblioteca math.h para
arredondar para cima o valor do volume.
c) Escreva uma função que recebe como parâmetros duas
medidas de comprimento e a espessura e retorne o preço da
respectiva superfície.
d) Escreva uma função que recebe como parâmetros as três
medidas desejadas e retorna o preço da caixa d’água. Sua
função vai precisar chamar as funções das letras a, b e c.
e) Escreva um programa que leia as medidas desejadas pelo
cliente e imprima o preço da caixa d’água.

PRECO DA CAIXA D’AGUA
Largura: 0.8
Altura: 1
Profundidade: 1.15
Valor da caixa d’agua: R$ 173.52
