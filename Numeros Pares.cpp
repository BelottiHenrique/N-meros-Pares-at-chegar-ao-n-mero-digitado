#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int Num;


int main()
{
	// AQUI O USUARIO TERA QUE DIGITAR UM VALOR 0 AO X NUMERO

	cout << "Digite um valor inteiro Positivo: ";
	cin >> Num;
	system("cls");

	if (Num <= 0)  // AQUI ELE VERIFICA SE O NUMERO É 0 OU NEGATIVO, SE CASO FOR ELE TERMINA O PROGRAMA E RETORNA AO MAIN USANDO ( RETURN MAIN() )
	{
		cout << "O numero deve ser positivo!!!" << endl;
		return main();
		
	}
	// CASO O NUMERO SEJA POSITIVO ELE SAI DO IF E ENTRA EM UM FOR PARA FAZER O CALCULO 

	cout << "Esse são os numeros pares do 0 ao: " << Num << endl;
	for (int i = 0; i <= Num; i++) {  // AQ O ( I ) É IGUAL A 0, DEPOIS PERGUNTA SE I É MENOR OU IGUAL A VARIAVEL Num, CASO NÃO SEJA ELE ADD MAIS 1 COM I++
		if (i % 2 == 0) {    // AQUI CALCULA I MOD 2 QUE SOBRA 0, SE FIZER A DIVISAO NA QUAL A SOBRA DE 0 SIGNIFICA QUE O VALOR É PAR. 
			cout << i << endl; // ELE EXIBE NA TELA DE USUARIO ATE O VALOR DE I SER IGUAL A VARIAVEL Num SER DIFERENTE.

		}
	}
	
	return main();
	
}