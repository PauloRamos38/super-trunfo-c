🃏 Super Trunfo – Cadastro e Comparação de Cartas (Linguagem C)

Este projeto foi desenvolvido em linguagem C e simula um jogo de Super Trunfo, onde duas cartas representam cidades brasileiras.
O programa permite cadastrar dados, realizar cálculos estatísticos e comparar cartas com base em diferentes atributos.

📌 Objetivo do Projeto

Praticar entrada e saída de dados em C

Trabalhar com variáveis, tipos primitivos e strings

Realizar cálculos matemáticos

Utilizar estruturas de decisão (if, switch)

Organizar o código por níveis de dificuldade

🧱 Estrutura do Programa

O código está dividido em três níveis:

🟢 Nível Novato – Cadastro das Cartas

Neste nível, o usuário informa os dados de duas cartas, contendo:

Estado (UF)

Código da carta

Nome da cidade

População

Área (km²)

PIB

Número de pontos turísticos

🟡 Nível Aventureiro – Cálculos Automáticos

Após o cadastro, o programa calcula automaticamente:

Densidade populacional

𝑑
𝑒
𝑛
𝑠
𝑖
𝑑
𝑎
𝑑
𝑒
=
𝑝
𝑜
𝑝
𝑢
𝑙
𝑎
𝑐
\c
𝑎
~
𝑜
/
𝑎
ˊ
𝑟
𝑒
𝑎
densidade=popula
c
\c
	​

a
~
o/
a
ˊ
rea

PIB per capita

𝑝
𝑖
𝑏
 
𝑝
𝑒
𝑟
 
𝑐
𝑎
𝑝
𝑖
𝑡
𝑎
=
𝑝
𝑖
𝑏
/
𝑝
𝑜
𝑝
𝑢
𝑙
𝑎
𝑐
\c
𝑎
~
𝑜
pib per capita=pib/popula
c
\c
	​

a
~
o

⚠️ Neste nível não são utilizados if ou else, apenas cálculos diretos.

🔴 Nível Mestre – Comparação das Cartas

O usuário escolhe um atributo para comparar as cartas:

População (maior vence)

Área (maior vence)

PIB (maior vence)

Densidade populacional (menor vence)

PIB per capita (maior vence)

O programa determina automaticamente:

Carta 1 vencedora

Carta 2 vencedora

ou Empate

🖥️ Como Compilar e Executar
✅ Pré-requisitos

Compilador C (ex: GCC)

Terminal ou Prompt de Comando

▶️ Compilação
gcc super_trunfo.c -o super_trunfo

▶️ Execução
./super_trunfo


(No Windows, use super_trunfo.exe)

📥 Exemplo de Entrada
Estado (ex: PE): PE
Codigo da carta (ex: A01): A01
Nome da cidade: Recife
Populacao: 1600000
Area (km2): 218.4
PIB: 60000000
Pontos turisticos: 15

📤 Exemplo de Saída
=== Dados Calculados ===

Carta 1 - Recife
Densidade Populacional: 7325.23 hab/km2
PIB per Capita: 37.50 reais

📚 Conceitos Utilizados

scanf e printf

Vetores de char (strings)

Operadores aritméticos

if / else

switch case

Operador ternário ?:

🚀 Possíveis Melhorias Futuras

Uso de struct para representar cartas

Validação de entradas do usuário

Cadastro de mais de duas cartas

Interface gráfica ou menu interativo

Salvamento de dados em arquivo

👨‍💻 Autor

Paulo Ramos de Oliveira
Projeto acadêmico desenvolvido para fins de aprendizado em Linguagem C.
