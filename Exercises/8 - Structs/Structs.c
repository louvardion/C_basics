#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50

/*
Structs(registros)

Sintaxe de defini��o:
struct <novo_tipo>{
		<tipo1> <campo1>;
		<tipo2> <campo2>;
		...
		<tipoN> <campoN>;
	};
	
Sintaxe de declara��o de vari�vel:
struct <novo_tipo> <nome da variavel>;
	
	
Comando typedef: renomeia um identificador
	typedef <tipo> <novo_nome>;
			
Acessando membros de uma struct:
Ap�s ter uma vari�vel desse tipo declarada:
Sintaxe:
	<vari�vel>.<campo>	
	
Fato: � comum misturar vetores e structs!		
*/

	struct tipo_pessoa{
		int idade;
		float peso;
		char nome[TAM];
	};	
	
	typedef struct tipo_pessoa tipo_pessoa;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//Criondo e inicializando os campos:
	
	tipo_pessoa pes = {0, 0.0, "Teste"};
	
	printf("In�cio:\n");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %2.f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);
	
	//Atribuindo valores aos campos:
	
	pes.idade= 10;
	pes.peso= 99.99;
	strcpy(pes.nome, "C�ndida");

	printf("\nAlternando os campos via c�digo: \n");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %2.f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);
	
	//Solicitando inser��o via teclado
	
	printf("\nInsira uma idade:\n");
	scanf("%d", &pes.idade);
		fflush(stdin);
	printf("Insira um peso (0.0):\n");
	scanf("%2.f", &pes.peso);
		fflush(stdin);
	printf("Insira um nome:\n");
	fgets(pes.nome, 50, stdin);
		fflush(stdin);

	printf("\nAlternando os campos com dados do usu�rio: \n");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %2.f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);
	
	system("pause");
	return 0;
} 
