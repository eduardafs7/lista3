#include <stdio.h>

int main() {
    float num1, num2;
    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);

    do {
        printf("Digite o segundo valor: ");
        scanf("%f", &num2);

        if (num2 == 0) {
            printf("VALOR INVÁLIDO. O segundo valor não pode ser zero.\n");
        }
    } while (num2 == 0);

    printf("Resultado da divisão: %.2f\n", num1 / num2);
    return 0;
}
