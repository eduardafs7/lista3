#include <stdio.h>

int main() {
    float valorMercadoria, total = 0, media;
    int contador = 0;
    char resposta;

    do {
        printf("Digite o valor da mercadoria: ");
        scanf("%f", &valorMercadoria);
        total += valorMercadoria;
        contador++;

        printf("MAIS MERCADORIAS (S/N)? ");
        scanf(" %c", &resposta);
    } while (resposta == 'S' || resposta == 's');

    media = total / contador;
    printf("O valor total das mercadorias é: R$ %.2f\n", total);
    printf("A média de valor das mercadorias é: R$ %.2f\n", media);

    return 0;
}
