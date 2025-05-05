#include <stdio.h>

int main() {
    float nota1, nota2, media;
    char resposta;

    do {
        printf("Digite a primeira nota (0 a 10): ");
        scanf("%f", &nota1);

        while (nota1 < 0 || nota1 > 10) {
            printf("Nota inválida. Digite a primeira nota novamente (0 a 10): ");
            scanf("%f", &nota1);
        }

        printf("Digite a segunda nota (0 a 10): ");
        scanf("%f", &nota2);

        while (nota2 < 0 || nota2 > 10) {
            printf("Nota inválida. Digite a segunda nota novamente (0 a 10): ");
            scanf("%f", &nota2);
        }

        media = (nota1 + nota2) / 2;
        printf("A média do aluno é: %.2f\n", media);

        printf("NOVO CÁLCULO (S/N)? ");
        scanf(" %c", &resposta); // Espaço antes para limpar o buffer de entrada

    } while (resposta == 'S' || resposta == 's');

    return 0;
}
