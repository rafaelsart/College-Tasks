#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* ---------------------------------------------------
Programa que testa syscalls de memoria indiretamente:

malloc()
free()
calloc()
---------------------------------------------------- */

int main(void) {
	int i, *vetor;

	printf("#### System Calls de Memoria ####");
	printf("\n\nAlocando memoria com malloc... \n");
	/* Alocando memoria para o vetor de inteiros */
	vetor = malloc(3*sizeof(int));

	vetor[0] = 1;
	vetor[1] = 2;
	vetor[2] = 3;


	for(i=0; i < 3; i++) {
		printf("Valor de vetor[%d]: : %d\n", i, vetor[i]);
		printf("Endereco de vetor[%d]: : %p\n\n", i, &(vetor[i]));
	}

	/* Libera memoria alocada para o vetor */		
	printf("Liberando memoria... \n");
	free(vetor);

	for(i=0; i < 3; i++) {
		printf("Valor de vetor[%d] apos liberar memoria: %d\n", i, vetor[i]);
		printf("Endereco de vetor[%d] apos liberar memoria: %p\n\n", i, &(vetor[i]));
	}

	printf("\n");

	printf("Alocando memoria com calloc... \n");
	/* Alocando memoria para o vetor de inteiros */
	vetor = calloc(5, sizeof(int));
	vetor[0] = 5;
	vetor[1] = 4;
	vetor[2] = 3;
	vetor[3] = 2;
	vetor[4] = 1;

	for(i=0; i < 5; i++) {
		printf("Valor de vetor[%d]: : %d\n", i, vetor[i]);
		printf("Endereco de vetor[%d]: : %p\n\n", i, &(vetor[i]));
	}

	return 0;
}
