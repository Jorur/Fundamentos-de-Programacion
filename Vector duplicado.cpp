// 12.	Hacer un programa para eliminar los  números duplicados de un vector.

#include<iostream>
using namespace std;
#define NMAX 100

void LeerVec(char A[],int n)
{int i;
     for(i=0;i<n;i++)
     {
     	cout<<i+1<<")"; cin>>A[i];
	 }
	
}
void ImprimirVec(char A[],int n)
{int i;
     for(i=0;i<n;i++)
     {
     	cout<<i<<")"<<A[i]<<endl;
	 }
	
}

void Ordenamiento(char A[],int n)
{int i,aux,k;
    
    for(k=1;k<n;k++)
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

void Comparacion(char A[], int n)
{int i,aux1,aux2;
    
	for(i=0;i<n;i++)
	{ 
	     aux1=A[i];
	     	if(A[i]==0)
			{
			 aux1=aux2;	
			}
	     aux2=A[i+1];
		if(aux1==aux2)
		{
		
			A[i+1]=' ';
			
		}
	}
}




int main()
{ char A[NMAX]; int n;
    
    cout<<"Digite el tamaño del vector: "; cin>>n;
    cout<<"Vector A: "<<endl;
    LeerVec(A,n);
    Ordenamiento(A,n);
    Comparacion(A,n);
    cout<<"Vector Corregido..."<<endl;
    ImprimirVec(A,n);
    


	return 0;
}
