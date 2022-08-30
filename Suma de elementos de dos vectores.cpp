/*Problema 4:
Dado dos vectores A y B de tamañp N ambos
Hacer un programa para sumar los 2 vectores en un 3er vector
C[]= A[]+B[]
Ej. A={5,7,3,8,12}
    B={-4,76,45,6,8}
    C={1,83,48,14,20}
*/

#include<iostream>
using namespace std;
#define NMAX 100

void Leer_Vec(int A[],int n)
{int i;
	for(i=0;i<n;i++)
	{
		cout<<i+1<<") "; cin>>A[i];
	}
}

void suma(int A[],int B[],int C[],int n)
{int i;
   for(i=0;i<n;i++)
	{
		C[i]=A[i]+B[i];

	}
   	
}

void Imprima_vec(int V[],int n)
{ int i;
	for(i=0;i<n;i++)
	{
	  cout<<"C["<<i<<"]="<<V[i]<<endl;
    }
 
}

int main()
{
	int A[NMAX],B[NMAX],C[NMAX],n;
	
	cout<<"Digite el tamano del vector: "; cin>>n;
	cout<<"Vector A "<<endl;
	Leer_Vec(A,n);
	cout<<"Vector B "<<endl;
	Leer_Vec(B,n);
	
	suma(A,B,C,n);
	Imprima_vec(C,n);


  return 0;	
}
