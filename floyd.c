#include <stdio.h>

int main() {
    int n, num = 1, i, j;

    printf("Digite n: ");
    scanf("%d", &n);

    for (i = 1; num <= n; i++) {
        for (j = 0; j < i && num <= n; j++) {
            printf("%d\t", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}