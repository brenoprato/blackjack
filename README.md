# 🃏 Projeto Blackjack em C

Este é um **projeto pessoal** desenvolvido por mim, aplicando os conhecimentos adquiridos nas aulas de **Linguagem de Programação (LP)** da **UNIFESP**, combinados com estudo autônomo. O objetivo foi praticar a linguagem C de forma divertida, criando uma versão jogável do clássico **Blackjack (21)** no terminal.

---

## 🎮 Sobre o Jogo

**Blackjack**, também conhecido como **21**, é um jogo de cartas onde o objetivo é somar o valor das cartas o mais próximo possível de 21, sem ultrapassá-lo.

### Regras básicas:
- Cada jogador e o dealer recebem **duas cartas** no início.
- Uma das cartas do dealer fica **escondida** até o final da rodada.
- O jogador pode escolher **"Hit"** (comprar uma carta) ou **"Stand"** (parar).
- O dealer revela sua carta e deve continuar comprando até atingir **17 pontos ou mais**.
- Quem ultrapassar 21, perde automaticamente.
- Ganha quem tiver a **maior pontuação válida (até 21)**.

---

## 🧠 Conceitos de C aplicados

Neste projeto foram aplicados diversos conceitos importantes da linguagem C, como:

- **Structs** para modelar as cartas.
- **Vetores de structs** para representar as mãos dos jogadores.
- **Funções com parâmetros ponteiros**, inclusive ponteiros para inteiros e structs.
- **Manipulação de strings com ponteiros** (`char*`).
- **Ponteiros para controle de contadores dinâmicos** (cartas na mão e no baralho).
- **Separação modular em arquivos `.c` e `.h`**.
- **Embaralhamento de cartas** com função `shuffle`.
- **Leitura de entrada do usuário** (`scanf`, `getchar`).
- **Uso condicional e loops para controlar o jogo**.
- **Limpeza do terminal de forma compatível com Linux/Windows**.
- **Controle de fluxo com estruturas `if`, `do/while`**.
- **Tratamento do Ás como 1 ou 11** dinamicamente, dependendo do valor da mão.

---

## ⚙️ Como compilar e executar

1. Compile com:

```bash
gcc main.c dealer.c utils.c -o bj
./bj
