/*4.	Hacer un programa para revertir la lista de valores de un vector, en otro vector, 
es decir se debe mantener el vector original.*/

#include <iostream>
using namespace std;
#define NMAX 100


void LeerVec(int V[], int n)
{int i;
  for(i=0;i<n;i++)
  {
  	cout<<i+1<<") "; cin>>V[i];
  }
	
}

void invertido(int V[],int U[], int N)
{int i;
	
	for(i=0;i<N;i++)
	{
		U[N-i-1]=V[i];
	}
}

void Imprimir(int A[],int n)
{int i;
	
	for(i=0;i<n;i++)
	{
		cout<<i+1<<")"<<A[i]<<endl;
	}
}


int main()
{int A[NMAX],B[NMAX],N;
     
     cout<<"Digite el tamano del vector: "; cin>>N;
     cout<<"Vector A: "<<endl;
     LeerVec(A,N);
     
     invertido(A,B,N);
     cout<<"Vector B: "<<endl;
     Imprimir(B,N);
     return 0;
	
}







