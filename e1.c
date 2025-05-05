#include <stdio.h>

int main() {
    float num1, num2;
    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);

    printf("Digite o segundo valor: ");
    scanf("%f", &num2);

    while (num2 == 0) {
        printf("VALOR INVÁLIDO. O segundo valor não pode ser zero.\n");
        printf("Digite o segundo valor novamente: ");
        scanf("%f", &num2);
    }

    printf("Resultado da divisão: %.2f\n", num1 / num2);
    return 0;
}
