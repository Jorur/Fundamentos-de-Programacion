/*6.	Hacer un programa para determinar si un vector es capicúa, es decir, 
si el vector revertido es igual al inicial, se dice que el vector es capicúa.*/

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

int transformar(int A[],int N) //Transformacion de vector a numero para comparar
{int i,m;
     
    m=0; 
	for(i=0;i<N;i++)
	{
		m=m*10+A[i];
	}
    
    return m;

}

void Comparacion(int x,int y)
{
	if(x==y)
	{
		cout<<"El vector es capicua... "<<endl;
	}
	else 
	{
		cout<<"El vector no es capicua... "<<endl;
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
     Comparacion(transformar(A,N),transformar(B,N));
     
     
     return 0;
	
}








