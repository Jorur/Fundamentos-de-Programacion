/*Objetivo:  Leer e imprimir un vector de characteres
    manejar las funciones strlen, toupper, tolower
*/

#include <iostream>
#include <string.h>
using namespace std;
#define NMAX 100

void LeerVec(char V[], int n)
{int i;
  for(i=0;i<n;i++)
  {
  	cout<<i+1<<") "; cin>>V[i];
  }
}

void Imprimir(char V[], int n)
{int i;
  for(i=0;i<n;i++)
  {
  	cout<<V[i]; 
  }
}

int main()
{
	char nombre[10]; int n,i;
	cout<<"Digite su nombre: ";
	
	//strlen
	cin>>nombre;
	n=strlen(nombre);
	cout<<"Nombre v2: "<<endl;
	Imprimir(nombre,n);
	
	cout<<endl;
	cout<<"Nombre v3: "<<endl;
	
	i=0;
	while(nombre[i]!='\0')
	{
		cout<<nombre[i];
		i++;
	}
	cout<<endl;
	//Convirtiendo a mayuscula
	cout<<"Convirtiendo a Mayuscula: "<<endl;
	for(i=0;i<n;i++)
	{
		nombre[i]=toupper(nombre[i]);
		cout<<nombre[i];
	}
	
	cout<<endl;
	//Convirtiendo a minuscula
	cout<<"Convirtiendo a Minuscula: "<<endl;
	for(i=0;i<n;i++)
	{
		nombre[i]=tolower(nombre[i]);
		cout<<nombre[i];
	}
	
	cout<<endl;
	//Nombre legal
	nombre[0]=toupper(nombre[0]);
	cout<<"Nombre legal: "<<nombre;
	
	
	
	
	return 0;
}
