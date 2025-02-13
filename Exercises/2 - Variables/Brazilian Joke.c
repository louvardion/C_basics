// sintaxe:
// "printf(<texto>, <v1>, <v2>, ...,<vN>);"
// uso:
// 0, 1 ou N variáveis.

//Especificadores de formato do "printf():"
//Digito |        Descrição                                            |
//----------------------------------------------------------------------
//d ou i |   Números inteiros em base decimal                          |
//  x    |   Números inteiros em base hexadecimal                      |
//  f    |   Números em ponto flutuante (com casas decimais)           |  
//  e    |   Números em notação científica (com casas decimais)        |  
//  c    |   Um único caractere alfanumérico (texto)                   |
//  s    |   Sequência de caracteres alfanuméricos (texto)             |
//.<num> |   Especifica quantos dígitos serão impressos após a vírgula |


//Sequências de escape do "printf():"
//Digito |        Descrição                                            |
//----------------------------------------------------------------------
// \a    |   Toca um bipe, alarme sonoro padrão do sistema             |
// \b    |   Backspace                                                 |
// \n    |   Quebra de linha                                           |  
// \t    |   Tabulação horizontal (TAB)                                |  
// \r    |   Retorna ao início da linha                                |
// \0    |   Caractere nulo                                            |
// \v    |   Tabulação vertical                                        |
// \\    |   Caractere \											   |
// \'    |   Caractere '											   |
// \"    |   Caractere "										       |
// \?    |   Caractere ?											   |
// \123  |   Caractere relacionado ao código 123 em octal (ASCII)      |
// \X12  |   Caractere relacionado ao código 12 em gexadecimal (ASCII) |
// %%    |   Caractere %											   |


#include <stdio.h>
#include <stdlib.h> 


int main(){

	printf("Oi, tudo bem? Tenho 26 anos e ja sou garoto de programa.\n");
	printf("\n");
	printf("Valor inteiro: %d.\n", 10);
	printf("Valor real: %f.\n", 3.14159265);
	printf("Valor real com apenas duas casas: %.2f.\n", 3.14159265);
	printf("Dado de texto: %c.\n", 'A');
	printf("Dado de texto: %s.\n", "Testando"); 
 	printf("\n");	
 	
 	system("pause");
}
