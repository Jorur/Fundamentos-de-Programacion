// 8.	Dado un vector A de n números reales, obténgase la diferencia más grande entre dos elementos consecutivos de este vector.

#include <iostream>
using namespace std;
#define NMAX 100

void LeerVec(float V[], int n)
{int i;
  for(i=0;i<n;i++)
  {
  	cout<<i+1<<") "; cin>>V[i];
  }
	
}
float diferenciaG(float A[],int N)
{int i; float S,mayor;
   
   S=0;
   mayor=A[1]-A[0];
   for(i=2;i<N;i=i+2)
   {
   	S=A[i+1]-A[i];
   	
   	if(S>mayor)
   	{
	  S=mayor;
	}
	
   }
   	return mayor;
}




int main()
{float A[NMAX]; int N;
   
   cout<<"Digite el tamano del vector: "; cin>>N;
   
   LeerVec(A,N);
   cout<<"La diferencia mayor es: "<<diferenciaG(A,N);

	return 0;
}
