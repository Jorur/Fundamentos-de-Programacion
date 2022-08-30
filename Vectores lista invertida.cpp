/*Dada una lista de personas con nombres, hacer lo siguiente:
Imprima la lista
Invierta la lista 
Imprima la lista invertida 
Vector de nombres: string lista[100]
*/

#include <iostream>
using namespace std;
#define NMAX 100

void LeerVec(string V[], int n)
{int i;
  for(i=0;i<n;i++)
  {
  	cout<<i+1<<") "; cin>>V[i];
  }
}

void Imprimir(string V[], int n)
{int i;
  for(i=0;i<n;i++)
  {
  	cout<<i+1<<") "<<V[i]<<endl; 
  }
}

void Invierta(string A[], int N)
{int i; string aux;
    
    for(i=0;i<N/2;i++)
    {
    	aux=A[N-i-1];
    	A[N-i-1]=A[i];
    	A[i]=aux;
	}
   	
} 

int main()
{string A[NMAX]; int n;

   cout<<"Digite el tamano del vector A: "; cin>>n;
   LeerVec(A,n);
   Invierta(A,n);
   cout<<"Vector A invertido: "<<endl;
   Imprimir(A,n);



return 0;	
}



