/*
Dado un conjunto de letras imprimir las vocales
Entrada: r u i e i c d f a
Salida: u i e i a
*/

#include <iostream>
using namespace std;

int main()
{
	char letras[100]; int n,i;
	
	cout<<"Digite la cantidad de letras: "; cin>>n;
	cout<<"Digite las letras: ";
	for(i=0;i<n;i++)
	{
		
		cin>>letras[i];
	}
		cout<<"Las vocales son: ";
	for(i=0;i<n;i++)
	{
		if(letras[i]=='a')
		{
			cout<<letras[i]<<", ";
		}
		if(letras[i]=='e')
		{
			cout<<letras[i]<<", ";
		}
		if(letras[i]=='i')
		{
			cout<<letras[i]<<", ";
		}
		if(letras[i]=='o')
		{
			cout<<letras[i]<<", ";
		}
		if(letras[i]=='u')
		{
			cout<<letras[i]<<", ";
		}
	}
   return 0;	
}
