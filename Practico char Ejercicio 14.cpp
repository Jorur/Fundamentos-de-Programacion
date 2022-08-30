/*14.	Diseña una función "BuscarSubCadena" que busque la primera aparición de una subcadena a dentro de una cadena b, y devuelva su posición o ?1 
si no está. Tanto a como b deben ser string.
            BuscarSubCadena("oool", "hooola") ? 2 
Entrada: 
Cadena: hooola.
Subcaden: oool
Salida: 2
*/

#include<iostream>
#include<string.h>
using namespace std;

void BuscarSubCadena(string b,string a,int n)
{int i;
	
	for(i=0;i<n;i++)
	{
		
	}
}

int main()
{
	string b,a; int n,m;
	cout<<"Digite la cadena: "<<endl;
	getline(cin,b);
	n=b.size();
	cout<<"Ingrese la subcadena: "<<endl;
	getline(cin,a);
	m=b.find(a);
	cout<<m<<endl;
	BuscarSubCadena(b,a,n);
	
}
