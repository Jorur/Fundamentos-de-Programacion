/*Dado un vector de nombres que se encuentran en un vector string Nombres[10], elaborar un programa que coloque en un char Texto[1000] separado por comas (,).

Entrada Nombres[]:  

Juan

Pedro

Luis

Susana

Roberto

Felix

Magdalena

Gabriel

Salida: 

Texto='Juan, Pedro, Luis, Susana, Roberto, Felix, Magdalena, Gabriel'


Jorge Urioste Hurtado
23-11-2021
Problema 4*/

#include <iostream>
#include<string.h>
using namespace std;
#define NMAX 100

void LeerVec(string V[], int n)
{int i;
  for(i=0;i<n;i++)
  {
  	cout<<i+1<<") "; cin>>V[i];
  }
}

void CambioInv(char A[],string V[],int n)
{int i; string oracion;
	
	for(i=0;i<n;i++)
	{
	  if(i==n-1)
	  {
	  oracion=oracion+V[i];	
	  }
	  else
	  {
      oracion=oracion+V[i]+",";
      oracion=oracion+" ";
      }
    
	}
	
	//A[0]=oracion[0];
	for(i=0;i<100;i++)
	{
      A[i]=oracion[i];
    
	}
	
}


int main()
{
	char texto[1000]; string nombres[10]; int n;
	
	cout<<"Digite el tamaño del vector: "; cin>>n;
	
	LeerVec(nombres,n);
	CambioInv(texto,nombres,n);
	cout<<texto;
	return 0;
}
  
