/*Dado un texto de nombres que se encuentran en un char Texto[1000], donde los nombres estan separados por una coma y espacio (, ) 
Llevar(copiar) cada nombre a un vector string Nombres[10]

Entrada Texto[]:  

Texto='Juan, Pedro, Luis, Susana, Roberto, Felix, Magdalena, Gabriel'

Salida Nombres[]: 

Juan

Pedro

Luis

Susana

Roberto

Felix

Magdalena

Gabriel

*/

#include <iostream>
#include <string.h>
using namespace std;
#define NMAX 100


void Imprimir(string V[], int n)
{int i;
  for(i=0;i<n;i++)
  {
  	cout<<V[i]<<endl; 
  }
}

void Cambio(char A[],string V[],int n)
{int i,j; string palaux;
      j=0;
	  for(i=0;i<n;i++)
	  {
	    if(A[i]!=',')
	    {
	       if(A[i]==' ')
	       {
	       	 palaux=palaux+A[i+1];
	       	 i++;
		   }
		  else
		  {
		  	 palaux=palaux+A[i];
		  }

		}
		else
		{
				V[j]=palaux;
				j++;
			palaux="";
		}
		
	  }

	
}
int main()
{
	char texto[1000]; int n,i,j; string nombres[7];
	cin.get(texto,100);
    ///cout<<"Digite la palabra: ";
	/*cin.get(texto,1000);
	
	cin.ignore();
	*/
	n=strlen(texto);
	//cout<<n<<endl;

	Cambio(texto,nombres,n);
	Imprimir(nombres,n);
	
	return 0;
}
