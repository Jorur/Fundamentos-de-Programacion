//Ejercicio 1 examen final corregido

#include<iostream>
#include<string.h>
using namespace std;

int Comprobacion(char A[],int n)
{int i,cont=0;
       A[0]=tolower(A[0]);
       if(A[0]=='a'||A[0]=='e'||A[0]=='i'||A[0]=='o'||A[0]=='u')
		{
			cont++;
		}
 
    for(i=1;i<n;i++)
    {
	if(A[i]==' ')
	{
		if(A[i+1]=='a'||A[i+1]=='e'||A[i+1]=='i'||A[i+1]=='o'||A[i+1]=='u')
		{
			cont++;
		}
	}
	
  }
  return cont;
}

void Mostrar(char A[],string V[],int n)
{int i,j,k=0; string palaux=" ";
     j=0;
    for(i=0;i<n;i++)
    {  
	  if(A[i]!=' ')
	  {
	  	palaux=palaux+A[i];
	  	k++;
	  }
	  else
	  {
	  	if(A[i-k]=='a'||A[i-k]=='e'||A[i-k]=='i'||A[i-k]=='o'||A[i-k]=='u')
	  	{
	  	  V[j]=palaux;
	  	  cout<<V[j]<<",";	 
		  j++;
		  
		}
		palaux="";
		k=0;
	  }
    	
	}
	
	
}



int main()
{
	char texto[1000];
	cin.get(texto,100);
	string palabras[60];
	int n;
	n=strlen(texto);
	cout<<"La cantidad de palabras con vocal es: "<<Comprobacion(texto,n)<<endl;
	Mostrar(texto,palabras,n);
	
	
}
