#include <stdio.h>

int main() {
    int N, i;
    printf("Digite um valor N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
