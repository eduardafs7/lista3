#include <stdio.h>

int main() {
    int i, soma = 0, contador = 0;
    for (i = 15; i <= 100; i++) {
        soma += i;
        contador++;
    }
    printf("A média é: %.2f\n", (float)soma / contador);
    return 0;
}
