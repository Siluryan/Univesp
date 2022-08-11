#include <iostream>
using namespace std;

/* O código abaixo é apenas para aprendizado, portanto pode ter informações
erradas e contraditórias, e está servindo apenas para relembrar alguns conceitos básicos
de c++ */
/* lembre sempre de recompilar o código a cada alteração */ 

int main()
{
	/* cria a vaŕiável usando um nome, e por consequencia alocando um endereço de memória*/
	/* é possivel obter o endereço de memória usando o caracter especial & */
	int var = 5;
	cout << "Valor de var = " << var << endl;
	cout << "Valor do endereço de var (&var) = " << &var << endl;

	/* cria um ponteiro para o endereço de memória da varíavel
	nesse caso o compilador entende int* diferente de apenas int
	e portanto não é possível aplicar um valor inteiro a variavel;
	nesse caso apenas é permitido armazenar apenas endereços de memória */
	int* point = &var;
	cout << "Valor do ponteiro de var = " << point << endl;

	/* também é possivel obter o valor que uma variável está armazenando
	de forma indireta, ou seja, através de seu ponteiro;
	nesse caso ao invés de se usar a palavra point, que está armazenando &var,
	deve-se utilizar a sintaxe *point (uma forma de memorizar pode ser associar
	point a * + valor, e como o c++ trabalha com o primeiro índice por padrão
	ao usar *point estamos indicando que queremos o indice seguinte, no caso o valor) */
	cout << "Valor da variável obtido pelo seu ponteiro = " << *point << endl;

	return 0;
}