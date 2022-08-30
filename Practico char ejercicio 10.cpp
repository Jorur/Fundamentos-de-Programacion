/* 10.	Dada una cadena introducida por teclado; mostrar la cantidad de veces que existen dos vocales juntas.  Puede omitir acentos, para una versión uno.

Entrada: me muero por conocer ese rio.
Salida: 2 vocales (ue, io)
*/

#include <iostream>
#include <string.h>
using namespace std;


int main()
{char texto[1000]; int i,j=0,n,cont=0; string palaux[10];
   
   cout<<"Digite su oracion por favor..."<<endl;
   cin.get(texto,100);
   cin.ignore();
   n=strlen(texto);
   
   for(i=0;i<n;i++)
   {
   	 if(texto[i]=='a' || texto[i]=='e' || texto[i]=='i' || texto[i]=='o' || texto[i]=='u')
   	 {
   	 	if(texto[i+1]=='a' || texto[i+1]=='e' || texto[i+1]=='i' || texto[i+1]=='o' || texto[i+1]=='u')
   	 	{
   	 		palaux[j]=palaux[j]+texto[i]+texto[i+1];
   	 		j++;
   	 		cont++;
   	 		i++;
   	 		
		}
	 }
   }
   cout<<"El numero de vocales es: "<<cont<<" ";	
   for(j=0;j<cont;j++)
   {
   	cout<<palaux[j]<<",";
   }
   return 0;
}
