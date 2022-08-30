// Problema 3:  rango con vectores



#include<iostream>
using namespace std;
#define NMAX 100

void Leer_Vec(int A[],int n)
{int i;
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
}

int Suma_Vec(int V[],int n)	
{int i,R;

   R=0;
   for(i=0;i<n;i++)
   {
   	R=R+V[i];
   }
   return R;
   
}



void Imprima_vec(int V[],int n)
{ int i;
	for(i=0;i<n;i++)
	{
	  cout<<"A["<<n-i-1<<"]="<<V[n-i-1]<<endl;
    }
 
}

int MayorVec(int A[],int N)
{int i,mayor;

   mayor=A[0];
   
   for(i=1;i<N;i++)
   {
   	 if(A[i]>mayor)
   	 {
   	   mayor=A[i];	
	 }
   }
	return mayor;
}

int MenorVec(int A[],int N)
{int i,menor;

   menor=A[N-1];
   
   for(i=N-2;i>=0;i--)
   {
   	 if(A[i]<menor)
   	 {
   	   menor=A[i];	
	 }
   }
	return menor;
}



int Mayorsum(int S,int R)
{int mayor1;

   mayor1=S;
   
   	 if(R>mayor1)
   	 {
   	   mayor1=R;	
	 }
   
	return mayor1;
}



int main()
{
	int A[NMAX],B[NMAX],n,n1;
	cout<<"Digite el numero de elementos del primer grupo: "; cin>>n;
	Leer_Vec(A,n);
	
	
    cout<<"El mayor numero es: "<<MayorVec(A,n)<<endl;
    cout<<"El menor numero es: "<<MenorVec(A,n)<<endl;
    
    cout<<"El rango es: "<<MayorVec(A,n)-MenorVec(A,n)<<endl;
	
	return 0;
}		          

