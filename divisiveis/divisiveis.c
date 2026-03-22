#include <stdio.h>

int main(){

	int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Numeros divisiveis por 5 de 1 ate %d:\n", n);

    for (int i = 5; i <= n; i+=5)
    {
    	printf("%d\n", i);
    }

	return 0;	
}