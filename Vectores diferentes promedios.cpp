/* 7.	Sacar el promedio de cada tres valores consecutivos en un vector.
P1= A1 + A2 + A3 
P2= A2 + A3 + A4
P3= A3 + A4 + A5
……………………
*/

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

void Promedio(int A[],int N)
{int i; float S,prom;
   
   S=0;
   for(i=0;i<N;i=i+3)
   {
   	S=A[i]+A[i+1]+A[i+2];
   	prom=S/3;
	cout<<"El promedio es: "<<prom<<endl;   	
   }
   	
}


int main ()
{
   int A[NMAX],N;

   cout<<"Digite el tamano del vector: "; cin>>N;
   LeerVec(A,N);
   Promedio(A,N);
   
   return 0;
	
}
