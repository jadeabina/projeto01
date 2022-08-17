#include <iostream>

/*  Construir em pseudocódigo um algoritmo que faça a leitura de três nomes, armazene e por final imprima na tela os nomes armazenados.*/

int main(int argc, char** argv) { 

		char nome1[25];
		char nome2[25];
		char nome3[25];
		
		printf("Digite o primeiro nome: \n");
		scanf("%s",&nome1);
		
		printf("Digite o segundo nome:  \n");
		scanf("%s",&nome2);

		printf("Digite o terceiro nome: \n ");
		scanf("%s",&nome3);
		
		
		printf("\n OS NOMES ARMAZENADOS:");
		
		printf("\n Nome: %s", nome1);
		printf("\n Nome: %s", nome2);
		printf("\n Nome: %s", nome3);

	return 0;
}
