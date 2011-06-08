#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

/* ---------------------------------------------------
Programa que testa 4 syscalls de processo:

pid_t getpid(void);
pid_t getppid(void);
pid_t fork(void);
_exit();
---------------------------------------------------- */

int main (void) {
	int x;
	
	printf("#### System Calls de processos ####");
	printf("\n\nCapturando a identificação do processo atual...\n");
	printf("ID do processo atual: %d", getpid()); /* syscall que captura a ID do processo atual */
	printf("\n\n");

	printf("Capturando a identificação do processo pai do atual...\n");
	printf("ID do processo pai: %d", getppid()); /* syscall que captura a ID do processo do pai */
	printf("\n\n");

	printf("Criando um novo processo...\n");

	x = fork();

	if(x == -1) /* erro no fork() */
		printf("Falha ao executar system call fork");
	else 
		printf("ID do novo processo: %d\n", fork()); /* syscall que cria novo processo */

	printf("\n\n");
	_exit(0); /* syscall para sair do programa atual */

	return 0;
}
