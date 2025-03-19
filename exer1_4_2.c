/* exercício 1.4 2 */

#include <stdio.h>

int main() {
    float nota, soma = 0;
    int contador = 0;

    printf("Digite as notas do aluno (digite -5 para encerrar):\n");

    printf("Nota: ");
    scanf("%f", &nota);

    while (nota != -5) {
        soma += nota;
        contador++;

        printf("Nota: ");
        scanf("%f", &nota);
    }

    if (contador > 0) {
        printf("A média das notas é: %.2f\n", soma / contador);
    } else {
        printf("Nenhuma nota válida foi inserida.\n");
    }

    return 0;
}