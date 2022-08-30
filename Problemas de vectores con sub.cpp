/* 
problema: 1) Sumar los elementos de un vetor A[0]+A[1]+A[2] +....+A[N-1]
Ej.    A{6,7,8,12,-5,3,8} suma=39
          2) Obtener el mayor valor de un vector  
		  mayor= 12, posicion fisica=3, posicion ordinal= 4
Sugerencias p1: void Leer_Vec(int A,int n)
		        void imprima_Vec (int A, int n)
		        int Suma(int A, int n)
Sugerencias p2: void Leer_Vec(int A,int n)
		        void imprima_Vec (int A, int n)
				int Mayor_Vec (int A, int N)		  
*/

#include<iostream>
using namespace std;
#define NMax 100

void Leer_Vec(int A[],int n)
{int i;
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
}

void Imprima_Vec(int V[],int n)
{int i;
	for(i=0;i<n;i++)
	{
		cout<<V[i]<<endl;
	}

}

int Suma_Vec(int V[],int n)	
{int i,S;

   S=0;
   for(i=0;i<n;i++)
   {
   	S=S+V[i];
   	cout<<S<<endl;
   }
   return S;
   
}


int main()
{
	int A[NMax],n;
	cout<<"Digite el numero de elementos: "; cin>>n;
	Leer_Vec(A,n);
	cout<<"La suma es: "<<Suma_Vec(A,n);
	Imprima_Vec(A,n);
	
	
	return 0;
}		          

