#include <stdio.h>

int main(){

	int elemento1, razao, elementos;

	printf("Qual o primeiro elemento?\n");
	scanf("%d", &elemento1);
	printf("Qual a razao?\n");
	scanf("%d", &razao);
	printf("Quantos elementos devem ser exibidos?\n");
	scanf("%d", &elementos);

	for(int i=0; i<elementos; i++){
		printf("%d ", elemento1);
		elemento1+=razao;
	}

	return 0;
}
