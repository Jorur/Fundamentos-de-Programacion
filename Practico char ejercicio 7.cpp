//7.	Elaborar un programa que lea por teclado n caracteres y los coloque en una cadena en orden alfabético

#include<iostream>
#include<string.h>
using namespace std;


void Bubble(char A[],int n)
{int i,aux,k;
    for(k=1;k<n;k++)
    {
	
     for(i=0;i<n-k;i++)
	 {
	 	if(A[i]>A[i+1])
	 	{
		 aux=A[i];
	 	 A[i]=A[i+1];
	 	 A[i+1]=aux;
	 		
		}
	 }	
    }
}


int main()
{
	char texto[100]; int n,i;
	
	cout<<"Ingrese la cadena de caracteres por favor..."<<endl;
	cin.get(texto,100);
	cin.ignore();
	n=strlen(texto);
	Bubble(texto,n);
	cout<<"El nuevo orden de la palbra es: "<<endl;
	cout<<texto;
	
	
}
