#include <stdio.h>

int main(){

    int num1, num2;
    scanf("%d %d", &num1, &num2);

    num1 > num2 ? printf("maior numero: %d", num1) : printf("maior numero: %d", num2);

    return 0;
}
