#include <stdio.h>

int main() {
    int n, i, j;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
