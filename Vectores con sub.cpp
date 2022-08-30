/* 
problema: 1) Sumar los elementos de un vetor A[0]+A[1]+A[2] +....+A[N-1]
Ej.    A{6,7,8,12,-5,3,8} suma=39
          2) Obtener el mayor valor de un vector  
		  mayor= 12, posicion fisica=3, posicion ordinal= 4
Sugerencias p1: void Leer_Vec(int A,int n)
		        void imprima_Vec (int A, int n)
		        int Suma(int A, int n)
Sugerencias p2: void Leer_Vec(int A,int n)
		        void imprima_Vec (int A, int n)
				int Mayor_Vec (int A, int N)
Problema 3: obtener la diferencia entre el mayor valor y el menor valor del vector (rango)
En el ejemplo: Resultado: mayor - menor= 12 - (-5)= 17						  
*/

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
   
   for(i=0;i<N;i++)
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

   menor=A[0];
   
   for(i=0;i<N;i++)
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

int Rango(int V[],int n)	
{int i,R;

   R=0;
   for(i=0;i<n;i++)
   {
   	R=MayorVec(V,n)-MenorVec(V,n);
   }
   return R;
   
}

int main()
{
	int A[NMAX],B[NMAX],n,n1;
	cout<<"Digite el numero de elementos del primer grupo: "; cin>>n;
	Leer_Vec(A,n);
	
	//cout<<"Digite el numero de elementos del segundo grupo: "; cin>>n1;
	//Leer_Vec(B,n1);
	
	cout<<"La suma del primer grupo es: "<<Suma_Vec(A,n)<<endl;
	//cout<<"La suma del segundo grupo es: "<<Suma_Vec(B,n1)<<endl;
	
    
    cout<<"El mayor numero es: "<<MayorVec(A,n)<<endl;
    cout<<"El menor numero es: "<<MenorVec(A,n)<<endl;
    //cout<<"La suma mayor es : "<<Mayorsum(Suma_Vec(A,n),Suma_Vec(B,n1))<<endl;
    cout<<"El rango es: "<<Rango(A,n)<<endl;
    
	Imprima_vec(A,n);
	
	return 0;
}		          

