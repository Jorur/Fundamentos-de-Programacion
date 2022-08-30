//Ordenamiento de letra por bubble


#include <iostream>
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
  	cout<<i+1<<") "<<V[i]<<endl; 
  }
}

void Bubble(char A[],int n)
{int i,k; char aux;
    for(k=1;k<n-1;k++)
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
	int N=NMAX; char A[NMAX];
	
	cout<<"Digite el tamano del vector A: "; 
	LeerVec(A,N);
	Bubble(A,N);
	cout<<"Vector ordenado: "<<endl;
	Imprimir(A,N);
	
	
	
	
	return 0;
}
