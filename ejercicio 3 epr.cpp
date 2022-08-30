/*
Considere siguiente proceso repetitivo para un número entero dado: si el número es 1, el proceso termina. 
De lo contrario, si es par se divide entre 2, y si es impar se multiplica por 3 y se le suma 1. 
Si empezamos con 6, por ejemplo, obtendremos la sucesión de números 6, 3, 10, 5, 16, 8, 4, 2, 1. 
La conjetura de Collatz dice que, a partir de cualquier número inicial, la sucesión obtenida siempre termina en 1.
Escriba un programa que permita verificar la conjetura de Collatz para cualquier entero dado, y que imprima la secuencia correspondiente.
Jorge Urioste Hurtado
*/

#include <iostream>
using namespace std;

int main()
{
	int N;
	cout<<"Digite el valor de N: "; cin>>N;
	cout<<N<<endl;
	
	while(N>1)
	{
		
		if(N%2==0)
		{
			N=N/2;
			cout<<N<<endl;
			
		}
		else
		{
			N=(N*3)+1;
			cout<<N<<endl;
		}
	}
	return 0;
}
