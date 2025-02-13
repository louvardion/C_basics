// sintaxe:
// "printf(<texto>, <v1>, <v2>, ...,<vN>);"
// uso:
// 0, 1 ou N vari�veis.

//Especificadores de formato do "printf():"
//Digito |        Descri��o                                            |
//----------------------------------------------------------------------
//d ou i |   N�meros inteiros em base decimal                          |
//  x    |   N�meros inteiros em base hexadecimal                      |
//  f    |   N�meros em ponto flutuante (com casas decimais)           |  
//  e    |   N�meros em nota��o cient�fica (com casas decimais)        |  
//  c    |   Um �nico caractere alfanum�rico (texto)                   |
//  s    |   Sequ�ncia de caracteres alfanum�ricos (texto)             |
//.<num> |   Especifica quantos d�gitos ser�o impressos ap�s a v�rgula |


//Sequ�ncias de escape do "printf():"
//Digito |        Descri��o                                            |
//----------------------------------------------------------------------
// \a    |   Toca um bipe, alarme sonoro padr�o do sistema             |
// \b    |   Backspace                                                 |
// \n    |   Quebra de linha                                           |  
// \t    |   Tabula��o horizontal (TAB)                                |  
// \r    |   Retorna ao in�cio da linha                                |
// \0    |   Caractere nulo                                            |
// \v    |   Tabula��o vertical                                        |
// \\    |   Caractere \											   |
// \'    |   Caractere '											   |
// \"    |   Caractere "										       |
// \?    |   Caractere ?											   |
// \123  |   Caractere relacionado ao c�digo 123 em octal (ASCII)      |
// \X12  |   Caractere relacionado ao c�digo 12 em gexadecimal (ASCII) |
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
