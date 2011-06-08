#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

/* ---------------------------------------------------
Programa que testa 3 syscalls de Arquivos:

int mkdir(const char *pathname, mode_t mode);
int chdir(const char *path); 
int rmdir(const char *pathname);
---------------------------------------------------- */

int main(){
	int i, novaPasta;
	int dif, dif2, dif3;

	printf("#### System Calls de Arquivos ####\n\n");

	/* Criando um diretorio */
	printf("Criando novo diretorio...\n");
	dif = mkdir("novaPasta", S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
	if(dif == 0)
		printf("Diretorio 'novaPasta' criado corretamente.\n");
	if(dif == -1)
		printf("Falhar ao criar diretorio.\n\n");

	
	/* Acessando um diretorio */
	printf("Acessando o diretorio criado...\n");	
	dif2 = chdir("novaPasta");

	if(dif2 == 0)
		printf("Novo diretorio 'novaPasta' acessado corretamente.\n");
	if(dif2 == -1)
		printf("Falha ao acessar novo diretorio.\n");

	
	/* Acessando um diretorio */
	printf("Retornando para diretorio raiz...\n");	
	dif2 = chdir("../");

	if(dif2 == 0)
		printf("Retornou ao diretorio raiz corretamente.\n");
	if(dif2 == -1)
		printf("Falha ao retornar ao diretorio raiz.\n");	
	

	/* Removendo um diretorio */
	printf("Removendo diretorio 'novaPasta'...");
	dif3 = rmdir("novaPasta");
	if(dif3 == 0)
		printf("Diretorio 'novaPasta' foi removido corretamente.\n");
	if(dif3 == -1)
		printf("Falha ao remover diretorio.\n");


	return 0;
}
