/* Dado un vector obtener el mismo vector de forma invertida 
Segundo metodo
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

void Imprimir(int V[], int n)
{int i;
  for(i=0;i<n;i++)
  {
  	cout<<i+1<<") "<<V[i]<<endl; 
  }
}

void Invierta(int A[], int N)
{int i,aux;
    
    for(i=0;i<N/2;i++)
    {
    	aux=A[N-i-1];
    	A[N-i-1]=A[i];
    	A[i]=aux;
	}
   	
}

int main()
{int A[NMAX],n;

   cout<<"Digite el tamano del vector A: "; cin>>n;
   LeerVec(A,n);
   Invierta(A,n);
   cout<<"Vector A invertido: "<<endl;
   Imprimir(A,n);



return 0;	
}





 
