#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h> 
#include <stdio.h>
#include <unistd.h> 

/* ---------------------------------------------------
Programa que testa 4 syscalls de entrada/saída:

int open(const char *pathname, int flags);
ssize_t read(int fd, void *vuf, size_t count);
ssize_t write(int fd, const void *buf, size_t count);
int close(int fd);
---------------------------------------------------- */

int main(void) {
	int file, flagclose, flagwrite, flagread;
	
	printf("#### System Calls de Entrada e Saída ####");
	/* Abrindo arquivo para escrita e leitura */
	file = open("Teste.txt", O_CREAT|O_RDWR);

	printf("\n\n");
	printf("Abrindo arquivo ...\n");

	if(file == -1)
		printf("Falha ao abrir o arquivo.\n");
	else
		printf("O arquivo foi aberto corretamente.\n");


	printf("\n\n");
	printf("Escrevendo no arquivo ...\n");

	/* Escrevendo no arquivo */
	flagwrite = write(file, "Trabalho de SO 1 - Entrada e Saída", 50);

	if(flagwrite == -1)
		printf("Falha na escrita do arquivo.\n");
	else 
		printf("O arquivo foi escrito corretamente.\n");


	/* Fechando o arquivo */
	printf("\n\n");
	printf("Fechando o arquivo...\n");
	flagclose = close(file);

	if(flagclose != 0)
		printf("Falha ao fechar o arquivo.\n");
	else
		printf("Arquivo foi fechado corretamente.\n");

	return 0;
}
