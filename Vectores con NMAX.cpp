/*
Dado un vector de enteros A={5,8,12,-24,56,4}
Hacer un programa para sumar los elementos del vector A.
Salida: S= 5+8+12-24+56+4=61
Tambien debe imprimirse el vector

*/

#include <iostream>
using namespace std;
#define NMAX 100

void Leer_Vec(int V[],int N)
{ int i;
	for(i=0;i<N;i++)
	{
	  cout<<i+1<<") "; cin>>V[i];
	}
	
}

int suma(int V[],int n)
{int S,i;

	S=0;
	for(i=0;i<n;i++)
	{
		S=S+V[i];
	}
	return S;
}

void Imprima_vec(int V[],int n)
{ int i;
	for(i=0;i<n;i++)
	{
	  cout<<"A["<<i<<"]="<<V[i]<<endl;
    }
    //A[0]=5
}


int main()
{
	int A[NMAX],i,n;
	
	cout<<"Digite la cantidad de numeros a sumar: "; cin>>n;
	Leer_Vec(A,n); //Llama al subprograma
	cout<<"La suma es: "<<suma(A,n)<<endl;
	Imprima_vec(A,n);
	
	
    cout<<"Gracias! "<<endl;
    
    return 0;
}
