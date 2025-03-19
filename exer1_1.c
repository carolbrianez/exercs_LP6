/* exercício 1.1 */

#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    /* Recebendo as 3 notas do usuário */
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    /* Calculando a média */
    media = (nota1 + nota2 + nota3) / 3;

    /* Exibindo a média */
    printf("A média das notas é: %.2f\n", media);

    return 0;
}