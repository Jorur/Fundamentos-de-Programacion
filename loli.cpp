/*
9.	Dado dos conjuntos de caracteres (A y B), realizar un programa para realizar la intersección de conjuntos. El conjunto resultante es C.
Entrada:  A =    k, b, c, a, I, t, e, q, p 
		B =   a, m, g, p, I, h, k, n 
Salida: C =   k,a,I,p 

*/

#include <iostream>
#include <string.h>
using namespace std;
void enter_vect(char A[])
{int i;
	cout<<"Ingrese los caracteres:";
	cin.getline(A,50,'\n');
}
//imprimir el vector
void Imprimir_Vect(char A[], int n)
{ int i;
	for(i=0;i<n;i++)
	{
		cout<<A[i];
	}
}
//eliminar duplicado
void eliminar_repetido(char V[], int n) 
{

	for (int i = 0; i < n; i++) 
	{			                                     	//ciclo normal 

		for (int k = i + 1; k < n; k++)
		 {	                                               	// k = i + 1, para ver el elemento siguiente del vector

			while (V[i] == V[k])
			 {			                                  	// mientras V[i] = V[j] (o sea V[i] = V[i+1]) mientras haya un elemento repetido

				for (int j = k; j < n; j++) 
				{	                                     	// se crea un ciclo para colocar el elemento sgte	
													// en la casilla del repetido y recorrer el resto de elementos a 
					V[j] = V[j + 1];				// una celda anterior, para eso el for
				}
				n--;								//como hay un elemento repetido, el tamaño disminuye
			}
		}
	}
	Imprimir_Vect(V, n);								//imprime el vector sin los elementos repetidos con el tamaño n reducido
}
int main()
{int n,m,i,p=0; char A[100], B[100], C[100];
    enter_vect(A);
    n=strlen(A);
    enter_vect(B);
   // m=strlen(B);
    for(i=0;i<n;i++)
        {
        	   for(m=0;m<n;m++)   //lee el vector
            {
            	if(A[i]==B[m])
            	{
        		  C[p]=A[i];
        		  p++;
		     	}
	        }
        
		}
	  eliminar_repetido(C,p); 
	    
	
	
}
