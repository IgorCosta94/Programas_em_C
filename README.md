📑 Conteúdo do Repositório (Atualizado)
Os programas estão organizados por temas fundamentais, cobrindo todo o progresso na linguagem:

1. 🏗️ Estruturas de Seleção e Repetição
Lógica fundamental de controle de fluxo.

Seleção (if, if...else): Utilizada em todos os programas para tomada de decisão, como na validação de limites na corrida e verificação de cartas.

Repetição (while, do...while): Implementada para manter loops de simulação ativos até que uma condição de vitória seja atingida.

2. 🔁 Estrutura switch e Laço for
Controle de fluxo especializado e iteração direta.

Laço for: O pilar da maioria dos programas deste repositório, utilizado para percorrer arrays de strings, matrizes de labirinto e gerar tabelas de conversão.

Estrutura switch: Ideal para processar menus ou categorizar movimentos aleatórios (como os diferentes saltos da Lebre).

3. 📦 Arrays (Vetores e Matrizes)
Organização de dados de forma contígua na memória.

Arrays Unidimensionais: Armazenamento de sequências de números e strings (arrays de caracteres).

Arrays Multidimensionais (Matrizes): Utilizados na construção do mapa do Labirinto (12x12) e na organização do Baralho de Cartas (4x13).

4. 🛠️ Funções
Modularização e reaproveitamento de código.

Passagem de Parâmetros: Demonstração de como enviar arrays e ponteiros para funções especializadas (ex: função embaralhar ou imprime_pista).

Recursividade: Preparação para algoritmos avançados de busca, como a travessia de labirinto.

5. 🧠 Manipulação de Memória e Ponteiros
Explora a relação intrínseca entre arrays e ponteiros em C.

Acesso a Arrays: Demonstração das 4 formas de acessar elementos (subscrito de array, ponteiro/deslocamento e suas variações).

Aritmética de Ponteiros: Movimentação em blocos de memória contíguos.

6. 🃏 Simulações e Jogos
Implementação de lógicas complexas e algoritmos de aleatoriedade (stdlib.h e time.h).

Embaralhamento de Cartas: Algoritmo eficiente para troca de posições em matrizes.

Corrida da Tartaruga e a Lebre: Simulação de corrida utilizando ponteiros e números aleatórios para movimentação.

Labirinto (Maze Traversal): Base para algoritmos de busca e travessia em matrizes 12x12.

7. 🔤 Strings e Processamento de Texto
Uso intensivo da biblioteca <string.h> e <ctype.h>.

Tokenização com strtok: Divisão de frases em palavras e extração de dados formatados (como DDD e números de telefone).

Pig Latin: Transformação de strings movendo caracteres e concatenando sufixos.

Gerador de Frases Aleatórias: Construção sintática de sentenças usando arrays de ponteiros para strings.

Comparação de Memória: Diferenças práticas entre strncmp e memcmp.

8. 📊 Entrada, Saída e Formatação
Domínio das funções printf e scanf para controle fino de exibição.

Especificadores de Formato: Uso de larguras de campo, precisão decimal, preenchimento com zeros e sinais.

Conversão de Escalas: Calculadora de Fahrenheit para Celsius com saída tabelada.

Valor de Retorno do printf: Experimento para contar caracteres impressos e acumulados.

🛠️ Como Compilar e Executar
Certifique-se de ter um compilador C instalado (como gcc ou clang).

1. Clonar o repositório:

    Bash

    git clone https://github.com/seu-usuario/nome-do-repositorio.git

2. Compilar um programa:

    Bash

    gcc nome_do_arquivo.c -o executavel

3. Executar:

    Bash

    ./executavel

📘 Referências
* DEITEL, Paul; DEITEL, Harvey. C: Como Programar.

* Documentação da Biblioteca Padrão C (ISO C).

✍️ Autor
Desenvolvido por Igor Costa Martins.

    "A única maneira de aprender uma nova linguagem de programação é escrevendo programas nela." — Dennis Ritchie