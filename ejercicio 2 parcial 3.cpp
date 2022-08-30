/*Elaborar un programa que pida n palabras por teclado y los coloque en una string separada por un espacio.
Jorge Urioste Hurtado
23-11-2021
Problema 2*/

#include <iostream>
using namespace std;
#define NMAX 100

void LeerVec(string V[], int n)
{int i;
  for(i=0;i<n;i++)
  {
  	cout<<i+1<<") "; cin>>V[i];
  }
}
void transformar(string A[],int n)
{int i; string B;
    for(i=0;i<n;i++)
    { 
    	B=B+A[i];
    	B=B+" ";
	}
	cout<<B;
}

int main()
{
	string palabras[NMAX],oracion; int n;
	
	cout<<"Digite el tamaño del vector: "; cin>>n;
	
	LeerVec(palabras,n);
	transformar(palabras,n);
	
	return 0;
}
  
