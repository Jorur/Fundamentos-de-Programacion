// 3.	Hacer un programa para sacar el promedio de valores de un vector.

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

float Promedio(int A[],int N)
{int i; float S,prom;
   
   S=0;
   for(i=0;i<N;i++)
   {
   	S=S+A[i];
   	
   }
   prom=S/N;
   return prom;	
   	
}


int main()
{int A[NMAX],N;

   cout<<"Digite el tamano del vector: "; cin>>N;
   LeerVec(A,N);
   cout<<"El promedio de la suma de los vectores es: "<<Promedio(A,N);
   
   return 0;
	
}
