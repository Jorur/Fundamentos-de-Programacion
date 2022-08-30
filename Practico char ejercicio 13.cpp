/*13.	 Diseña una subprograma llamada "BorraPalabras" que dado una palabra por teclado borre todas las apariciones de esta palabra en el texto.
Entrada: 
Texto: No busques personas con tus mismos gustos, busca personas con tus mismos valores.

¿Qué palabra desea borrar?: personas
Salida: No busques con tus mismos gustos, busca con tus mismos valores.
*/

#include<iostream>
#include<string.h>
using namespace std;

int CambiarVec(string a,string V[],int n)
{int i,j=0,cont=0; string palaux="";
  
   for(i=0;i<=n;i++)
   {
   	  if(a[i]!=' ' && a[i]!='\0')
   	  {
   	  	palaux=palaux+a[i];
	  }
	  else
	  {
	  	V[j]=palaux;
	  	j++;
	  	palaux="";
	  	cont++;
	  }
   }
   return cont;
}

void BorraPalabras(string V[],int n,string borrar)
{int i,k;
   
   for(i=0;i<n;i++)
   {
   	 
   	 if(V[i]==borrar)
   	 {
   	 	for(k=i;k<n;k++)
   	 	{
   	 		V[k]=V[k+1];
	    }
   	 }
   }   
	
}
int main()
{
	string oracion,palabras[100],palabra; int n,i;
	cout<<"Ingrese una oracion por favor:"<<endl;
    getline(cin,oracion);
    cout<<"Ingrese la palabra que desea borrar: "; cin>>palabra;
    n=oracion.size();
    cout<<CambiarVec(oracion,palabras,n)<<endl;
    BorraPalabras(palabras,CambiarVec(oracion,palabras,n),palabra);
    for(i=0;i<n;i++)
    {
    	cout<<palabras[i]<<" ";
	}
}
