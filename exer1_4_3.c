/* exercício 1.4 3 */

#include <stdio.h>

int main() {
    int a = 0, b, c;

    printf("Digite -1 como primeiro valor para encerrar o programa.\n");

    while (a != -1) {
        printf("\nDigite o primeiro valor: ");
        scanf("%d", &a);

        if (a != -1) {
            printf("Digite o segundo valor: ");
            scanf("%d", &b);

            printf("Digite o terceiro valor: ");
            scanf("%d", &c);

            /* Teorema de Pitágoras - verificação */
            if (a * a == b * b + c * c || 
                b * b == a * a + c * c || 
                c * c == a * a + b * b) {
                printf("É um triângulo retângulo!\n");
            } else {
                printf("Não é um triângulo retângulo.\n");
            }
        }
    }

    printf("\nPrograma encerrado.\n");

    return 0;
}
