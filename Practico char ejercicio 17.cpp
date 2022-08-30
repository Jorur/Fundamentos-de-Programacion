/* 17.	Hacer un programa para unir dos listas de personas en una sola lista en orden alfabético.  
Las listas deben estar en  vectores de tipo string
*/

#include<iostream>
#include<string.h>
#define NMAX 100
using namespace std;

void LeerVec(string V[],int n)
{
	for (int i=0;i<n;i++)
	{
		cout<<i+1<<")"; cin>>V[i];
	}
}

void ImprimaVec(string V[],int n)
{
	for (int i=0;i<n;i++)
	{
		cout<<i+1<<")"<<V[i]<<endl;
	}
}

void ConcatenarVec(string V[],string U[],int n,int m)
{
	int j=0;
	for(int i=n;i<n+m;i++)
	{
		V[i]=U[j];
		j++;
	}
}

void Bubble(string A[],int n)
{int i,k; string aux;
    
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
	string lista1[NMAX],lista2[NMAX]; int n,m;
	
	cout<<"Ingrese el tamaño de la primera lista:"; cin>>n;
	cout<<"Ingrese la primera lista: "<<endl;
	LeerVec(lista1,n);
	cout<<endl;
	
	cout<<"Ingrese el tamaño de la segunda lista:"; cin>>m;
	cout<<"Digite la segunda lista: "<<endl;
	LeerVec(lista2,m);
	cout<<endl;
	
	ConcatenarVec(lista1,lista2,n,m);
	Bubble(lista1,n+m);
	cout<<"Lista ordenada: "<<endl;
	ImprimaVec(lista1,n+m);
	
	
	
	return 0;
}
