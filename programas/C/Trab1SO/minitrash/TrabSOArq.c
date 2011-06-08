#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(){
	int i, a, b, c, d;

	/*Teste do Mkdir(), cria o diretorio "a" e "b" */

	printf("\nListando diretorio antes do Mkdir(): \n");
	system("ls");
	b = mkdir("a", S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
	if(b == 0)
		printf("\nDiretorio 'a' criado com sucesso!\n");
	if(b == -1)
		printf("\nDiretorio 'a' criado sem sucesso!\n");
	b = mkdir("b", S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
	if(b == 0)
		printf("\nDiretorio 'b' criado com sucesso!\n");
	if(b ==- 1)
		printf("\nDiretorio 'b' criado sem sucesso!\n");
	
	printf("\nListando diretorio depois do Mkdir(): \n");
	system("ls");
	/*-------------------------------------------------------------------*/

	/*Teste do Rmdir(), deleta o diretorio "a" */
	printf("\nListando diretorio antes do Rmdir(): \n");
	system("ls");

	d = rmdir("a");
	if(d == 0)
		printf("\nDiretorio 'a' deletado com sucesso!\n");
	if(d == -1)
		printf("\nDiretorio 'a' deletado sem sucesso!\n");
	
	printf("\nListando diretorio depois do Rmdir(): \n");
	system("ls");
	/*-------------------------------------------------------------------*/

	/*Teste do Chdir(), muda o diretorio atual para o novo diretorio "b" */
	printf("\nDiretorio atual:\n");
	system("pwd");
	chdir("b");

	if(c==0)
		printf("\nDiretorio modificado com sucesso!\n");
	if(c==-1)
		printf("\nDiretorio modificado sem sucesso!\n");

	printf("\nDiretorio atual depois do Chdir():\n");
	system("pwd");
	/*-------------------------------------------------------------------*/

	return 0;
}
