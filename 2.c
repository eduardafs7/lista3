#include <stdio.h>

int main() {
    float valor1, valor2;

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);

    do {
        printf("Digite o segundo valor: ");
        scanf("%f", &valor2);

        if (valor2 == 0) {
            printf("VALOR INVALIDO. O segundo valor nao pode ser zero. Tente novamente.\n");
        }
    } while (valor2 == 0);

    printf("Resultado da divisao: %.2f\n", valor1 / valor2);

    return 0;
}
