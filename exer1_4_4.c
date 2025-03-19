/* exercício 1.4 4 */

#include <stdio.h>
#define PI 3.14159

int main() {
    float raio, diametro, circunferencia, area;

    printf("Digite o valor do raio do círculo: ");
    scanf("%f", &raio);

    diametro = 2 * raio;
    circunferencia = 2 * PI * raio;
    area = PI * raio * raio;

    printf("Diâmetro: %.2f\n", diametro);
    printf("Circunferência: %.2f\n", circunferencia);
    printf("Área: %.2f\n", area);

    return 0;
}

