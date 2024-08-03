Exercícios básicos de C++
//------------------------------------------------------//
1. 
Construa uma sequência de instruções para calcular o
volume de um copo com 12 cm de altura e 6 cm de
diâmetro, da seguinte forma:
• Declare as variáveis para raio, altura e volume;
• Inicialize as variáveis cujo valor é conhecido;
• Calcule o valor do volume e armazene-o na variável. 
//------------------------------------------------------//
2.
Construa uma sequência de instruções para determinar
qual a quantidade de segundos exata de um dia,
considerando que possui 23 horas, 56 minutos e 4
segundos. Assim como no exercício anterior, declare
variáveis, inicialize-as e, por fim, realize o cálculo,
armazenando o resultado.
//------------------------------------------------------//
3.
Elabore um programa completo que imprima o dobro, o
triplo e o quadrado do valor x. O valor de x pode ser
escolhido por você ao inicializar a variável. Supondo que o
valor de x é 3, a saída de seu programa deve ser:

Valor: 3
Dobro de 3: 6
Triplo de 3: 9
Quadrado de 3: 9

Use variáveis para armazenar
os valores numéricos que
deverão ser impressos.
//------------------------------------------------------//
4. 
Faça um programa que lê uma temperatura em
graus Celsius e a imprime convertida em graus
Fahrenheit. A fórmula de conversão é:

F ← (9*C+160)/5
//------------------------------------------------------//
5.
Faça um programa que lê um valor de salário
mínimo e o salário de um funcionário. O programa
deve calcular e imprimir quantos salários mínimos
esse funcionário ganha.
Após fazer o programa, verifique se seu programa
está correto fazendo o teste de mesa com as
entradas 800.00 e 2030.40.

//------------------------------------------------------//
6. 
Construa um programa que aplique um
desconto de 25% sobre o preço de um produto
recebido como entrada e imprima o valor
resultante. Verifique se o programa está
correto fazendo o teste de mesa. Use o valor
150.00 como entrada.

//------------------------------------------------------//
7.
Construa um programa que leia dois valores
reais x e y, calcule e imprima os valores de w e
z de acordo com as fórmulas:

w = (2x + y)/2 e z = 1/w

Faça o teste para as entradas x = 1.5
e y = 2.0.

//------------------------------------------------------//
8.
Faça um programa que leia três notas de um
aluno, calcule e imprima a média ponderada,
sabendo que as notas possuem peso 2, 3 e 5.

//------------------------------------------------------//
9.
Uma empresa contratou um médico para avaliar
todos os seus funcionários na própria sede da empresa. Para
que cada funcionário saiba o horário agendado para sua
consulta médica, você deverá fazer um programa que lê a
matrícula do funcionário e informa o dia e horário da consulta.
Observe que:
• As matrículas dos funcionários são números consecutivos
entre 1 e 30 (inclusive). Os funcionários serão atendidos em
ordem crescente de matrícula.
• As consultas duram uma hora e serão realizadas em uma
única semana, de 2a a 6a. O médico estará disponível das 8
às 14h.
Para a matrícula 24, por exemplo, o programa deverá imprimir
a saída: 5a-feira as 13:00 horas

//------------------------------------------------------//
10.
Escreva um programa que leia dois valores inteiros e efetue
as seguintes operações matemáticas: adição, subtração,
multiplicação, divisão e módulo (resto da divisão).
Para os valores de entrada 5 e 2, o programa deverá exibir na
tela:

OPERACOES SOBRE INTEIROS
Digite o primeiro valor: 5
Digite o segundo valor: 2
5 + 2 = 7
5 - 2 = 3
5 * 2 = 10
5 / 2 = 2
5 % 2 = 1

//------------------------------------------------------//
11.
Elabore um programa que calcule o índice de massa corporal
(IMC) de uma pessoa. Para isso, peça ao usuário para digitar seu
peso (em Kg) e sua altura (em m), calcule o valor do seu IMC e
imprima-o.
O IMC é determinado pela divisão do peso da pessoa pelo
quadrado de sua altura.
Com peso de 61.5 Kg e altura de 1.70 m, o programa deve exibir:

INDICE DE MASSA CORPORAL
Digite o peso em kg: 61.5
Digite a altura em m: 1.70
Valor do IMC: 21.280276

//------------------------------------------------------//
12.
Elabore um programa que imprima o extrato de uma conta
salário que permite até 3 retiradas por mês. Leia o valor do
saldo inicial, o valor do salário e o valor de cada retirada,
imprimindo saldos parciais e final.
Ao ser executado, o programa deve exibir:

EXTRATO BANCARIO
Saldo inicial: R$2000
Salario: R$400.3
Saldo parcial: R$2400.30
1a retirada: R$150
Saldo parcial: R$2250.30
2a retirada: R$250.3
Saldo parcial: R$2000.00
3a retirada: R$499.5
Saldo final: R$1500.50

DESAFIO: tente resolver o problema usando apenas duas variáveis.

//------------------------------------------------------//
13. 
Elabore um programa que resolva um sistema de equações
composto por equações com a soma e a diferença entre dois
números reais. Seu programa deve ler o total da soma e da
diferença que aparecem nas equações, calcular os valores das
variáveis e, ao final, imprimir a solução.
Ao ser executado, o programa deve exibir:

SISTEMA DE EQUACOES
x + y = 14.8
x - y = 3.5
Solucao:
x = 9.150000
y = 5.650000

//------------------------------------------------------//
14.
Uma dona de casa precisa pagar a empregada doméstica
e a babá e quer sair do banco apenas com a quantia necessária para
pagá-las. O problema é que as funcionárias não podem dar troco,
então ela precisa saber quantas notas de cada valor vai precisar para
efetuar o pagamento.
Por exemplo, para pagar R$510,00 e R$490,00, não é suficiente ter
10 notas de R$100,00; são necessárias 9 notas de R$100,00, 1 nota
de R$50,00, 2 notas de R$20,00 e 1 nota de R$10,00.
Faça um programa que leia o valor dos dois salários e calcule o
número de notas necessárias para efetuar os pagamentos. A dona de
casa não quer andar com moedas nem notas de R$2,00 e os salários
devem ser arredondados para cima (um número múltiplo de 5).
PAGAMENTO SEM TROCO
1o valor: R$725
2o valor: R$443
Notas: 11xR$100;0xR$50;3xR$20;0xR$10;2xR$5.

//------------------------------------------------------//