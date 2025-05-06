# Aula 6: Estruturas de Repetição, Operadores e Exercícios em C

## Sumário
1. [Repetição controlada](#repetição-controlada)
   1. [Exercício 1](#exercício-1)
   2. [Operadores de atribuição](#operadores-de-atribuição)
   3. [Repetição com sentinela](#repetição-com-sentinela)
   4. [Exercício 2, 3 e 4](#exercício-2-3-e-4)
   5. [Operadores de incremento e decremento](#operadores-de-incremento-e-decremento)

---

## Repetição controlada

Quando sabemos a quantidade de repetições, podemos usar um contador. Exemplo:

```c
int contador = 1;
int fim = 5;

while (contador <= fim) {
  printf("%d ", contador);
  contador = contador + 1;
}
```

Memória:
```
fim = 5
contador = 1
contador = 2
contador = 3
contador = 4
contador = 5
contador = 6
```

Saída:
```
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
```

---

### Exercício 1

Crie um programa em C que:
- Recebe 3 notas.
- Calcula e exibe a média das notas.

---

## Operadores de atribuição

Podemos atribuir valores a variáveis em C com o operador `=`:

```c
x = 2;
```

Memória:
```
x = 2
```

O valor anterior de `x` é perdido, sendo substituído pelo novo valor.

Algumas operações podem ser abreviadas. Por exemplo:

```c
x = x + 3;
```

Pode ser substituído por:

```c
x += 3;
```

Outros operadores de atribuição:

| Operação           | Operador | Abreviação    |
|--------------------|----------|---------------|
| `x = x + 2;`       | `+=`     | `x += 2;`     |
| `y = y - 3;`       | `-=`     | `y -= 3;`     |
| `z = z * 4;`       | `*=`     | `z *= 4;`     |
| `w = w / 5;`       | `/=`     | `w /= 5;`     |
| `k = k % 6;`       | `%=`     | `k %= 6;`     |

Exemplo:

```c
int contador = 1;
int fim = 5;

while (contador <= fim) {
  printf("%d ", contador);
  contador += 1;
}
```

---

## Repetição com sentinela

Se não sabemos previamente a quantidade de repetições, usamos um valor de controle (sentinela) para encerrar o loop. Exemplo:

```c
#include <stdio.h>

int main(void) {
  int soma = 0;
  int numero;

  printf("Digite um número (-1 para encerrar): ");
  scanf("%d", &numero);

  while (numero != -1) {
    soma = soma + numero;

    printf("Digite um número (-1 para encerrar): ");
    scanf("%d", &numero);
  }

  printf("Resultado da soma: %d", soma);
  return 0;
}
```

---

### Exercício 2, 3 e 4

2. Crie um programa que:
   - Recebe várias notas de um aluno.
   - Calcula a média após o usuário digitar `-5`.

3. Crie um programa que:
   - Recebe três valores inteiros e verifica se eles podem formar um triângulo retângulo.
   - Permita que o usuário teste outros valores até que ele digite `-1` como o primeiro valor.

4. Crie um programa que:
   - Recebe o valor do raio de um círculo.
   - Calcula e mostra o diâmetro, a circunferência e a área do círculo.

---

## Operadores de incremento e decremento

### Incremento

O operador `++` adiciona 1 ao valor da variável:

```c
int x = 2;
x++;
printf("%d", x);
```

Memória:
```
x = 2
x = 3
```

Saída:
```
3
```

### Decremento

O operador `--` subtrai 1 do valor da variável:

```c
int x = 5;
x--;
printf("%d", x);
```

Memória:
```
x = 5
x = 4
```

Saída:
```
4
```

### Incremento/Decremento em expressões

Os operadores podem ser usados em expressões. A ordem do operador (`++` ou `--`) define o valor usado:

| Operador | Exemplo  | Usado na expressão |
|----------|----------|--------------------|
| `++`     | `++x`    | `x + 1`           |
| `++`     | `x++`    | `x`               |
| `--`     | `--x`    | `x - 1`           |
| `--`     | `x--`    | `x`               |

Exemplo:

```c
int x = 2;

printf("%d", ++x); // Saída: 3
```

Memória:
```
x = 2
x = 3
```
Saída:
```
3
```

```c
int x = 2;

printf("%d", x++); // Saída: 2
```

Memória:
```
x = 2
x = 3
```
Saída:
```
2
```

---
