/* Problema: 1^2+2^2+3^2+....+N^2
Entrada: N 
Salida: S
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{ int N,i,S;
	cout<<"Suma de los digitos al cuadrado"<<endl;
	cout<<"Digite el valor hasta el que quieres sumar: "; cin>>N;
	
	S=0;
	for(i=0;i<=N;i++)
	{
		S=S+ pow(i,2);
	}
	cout<<"La suma es: "<<S;
}
