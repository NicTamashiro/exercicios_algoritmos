#include <stdio.h>

int main(){
	
	float compra;
	int aplicativo;
	int distancia;

	printf("Digite o valor da compra:\n");
	scanf("%f", &compra);
	printf("Foi feita pelo aplicativo? (1) sim, (0) nao.\n");
	scanf("%d", &aplicativo);
	printf("Qual a distancia? (1) menor que 3km, (2) entre 3km e 5km, (3) acima de 5km.\n");
	scanf("%d", &distancia);

	if (aplicativo == 1)
	{
		compra+=5.00;
	};

	switch (distancia){
		case 1:
			compra+=6.00;
			break;
		case 2:
			compra+=10.50;
			break;
		case 3:
			compra+=15.00;
			break;
		default:
			printf("Digite um valor valido\n");	
	}

	printf("Preco a pagar: %.2f\n", compra);

	return 0;
}