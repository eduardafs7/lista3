#include <stdio.h>

int main() {
    float valor1, valor2;

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    
    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);
    
    while (valor2 == 0) {
        printf("VALOR INVALIDO. O segundo valor nao pode ser zero. Digite novamente: ");
        scanf("%f", &valor2);
    }

    printf("Resultado da divisao: %.2f\n", valor1 / valor2);

    return 0;
}
