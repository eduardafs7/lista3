#include <stdio.h>

int main() {
    int N, i;

    do {
        printf("Digite um valor N (maior que 0): ");
        scanf("%d", &N);
    } while (N <= 0);

    for (i = 1; i <= N; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
