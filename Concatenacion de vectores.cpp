/*9.	Concatenar dos vectores de tamaño n y m respectivamente. 
[a1,a2,......an;]  [b1,b2,....bm]; 
concatenado resulta [a1,a2,......an,b1,b2,....bm] con n+m elementos.
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

void Concatenar(int A[], int B[],int C[],int N,int M) 
{int i;
	
	for(i=0;i<N;i++)
	{
		C[i]=A[i];
	}
	
	for(i=0;i<M;i++)
	{
		C[N+i]=B[i];
	}
 } 
 
void Imprimir(int V[], int n)
{int i;
  for(i=0;i<n;i++)
  {
  	cout<<i+1<<") "<<V[i]<<endl; 
  }
}
 
 int main()
 {
 	int A[NMAX],B[NMAX],C[NMAX],N,M;
 	
 	cout<<"Digite el tamano del vector A: "; cin>>N;
 	cout<<"Vector A: "<<endl;
 	LeerVec(A,N);
 	cout<<"Digite el tamano del vector B: "; cin>>M;
 	cout<<"Vector B: "<<endl;
 	LeerVec(B,M);
 	
 	Concatenar(A,B,C,N,M);
 	cout<<"Vector C: "<<endl;
 	Imprimir(C,N+M);
 	
 	
 	
 	
 	
 	return 0;
 }
