#include <stdio.h>

int main() {
    int numMercadorias;
    float valorMercadoria, total = 0, media;
    
    printf("Digite o número total de mercadorias no estoque: ");
    scanf("%d", &numMercadorias);

    for (int i = 1; i <= numMercadorias; i++) {
        printf("Digite o valor da mercadoria %d: ", i);
        scanf("%f", &valorMercadoria);
        total += valorMercadoria;
    }

    media = total / numMercadorias;
    printf("O valor total das mercadorias é: R$ %.2f\n", total);
    printf("A média de valor das mercadorias é: R$ %.2f\n", media);

    return 0;
}
