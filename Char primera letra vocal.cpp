/*Autor: Jorge Urioste
Fecha: 23-11-21
Problema 1
Elaborar un programa que determine cuantas palabras comienzan con una vocal en una cadena introducida por teclado.

Entrada (texto): Esta es una entrada de texto para probar número de palabras que inician con una vocal

Salida: 6 palabras (Esta, es, una, entrada, inician, una)*/




#include <iostream>
#include <string.h>
using namespace std;
#define NMAX 100

void Imprimir(string V[],char A[], int n)
{int i,j;
  j=0;
  A[0]=tolower(A[0]);
  	if(A[0]=='a'||A[0]=='e'||A[0]=='i'||A[0]=='o'||A[0]=='u')
	{ V[j]=V[j]+A[0];
		while(A[i+1]!=' ')
	        {
	        	V[j]=V[j]+A[i+1];
	        	i++;
			}
			cout<<V[j]<<","; 
		    j++;	
		 
	}
  
  for(i=1;i<n;i++)
  {
  	while(A[i]!='\0' && A[i]==' ')
	{

		if(A[i+1]=='a'||A[i+1]=='e'||A[i+1]=='i'||A[i+1]=='o'||A[i+1]=='u')
	    {  
	        while(A[i+1]!=' ')
	        {
	        	V[j]=V[j]+A[i+1];
	        	i++;
			}
			cout<<V[j]<<","; 
		    j++;
				
	        
 	    }
        
		i++;
	}
  	
  	
  	
  	
  
  }
}

int primeraVocal(char A[],int n)
{int i,cont,j;

	cont=0;
	A[0]=tolower(A[0]);
	if(A[0]=='a'||A[0]=='e'||A[0]=='i'||A[0]=='o'||A[0]=='u')
	{
		cont++; 
	}
	
	
	i=0;
    for(i=1;i<n;i++)
    {
	while(A[i]!='\0' && A[i]==' ')
	{
		if(A[i+1]=='a'||A[i+1]=='e'||A[i+1]=='i'||A[i+1]=='o'||A[i+1]=='u')
	    { 
		cont++;
 	    }
       
		i++;
	}
    
   }
    return cont;
	
}

int main()
{
	char texto[NMAX]; int n; string palabra [NMAX];
	
    cout<<"Digite la palabra:";

	cin.get(texto,200);
	cin.ignore();
	n=strlen(texto);


  cout<<"La cantidad de palabras es: "<<primeraVocal(texto,n)<<endl;
  Imprimir(palabra,texto,n);
  
	return 0;
}
