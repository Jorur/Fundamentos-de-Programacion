/* Diseña una función llamada "BorraCaracterDeCadena" que dados un string y un carácter borre todas las apariciones del carácter en el string. 
"hola, mundo" 'o' ? "hla, mund"
Entrada: 
Texto: hola mundo.
Que carácter borra?: o
Salida: hla, mund
*/

#include <iostream>
#include <string.h>
using namespace std;

void BorraCaracterDeCadena(string oracion,char borrar,int n)
{int i,k;
   for(i=0;i<n;i++)
  {
  	if(oracion[i]==borrar)
  	{
  		for(k=i;k<n;k++)
  		{
  			oracion[k]=oracion[k+1];
		}
	}
	
  }	
  cout<<oracion<<endl;
}

int main()
{string texto; int i,n; char letra;
  
  cout<<"Digite la oracion: "<<endl;
  getline(cin,texto);
  cout<<"Digite la letra que desea eliminar: "; cin>>letra;
  n= texto.size();
  BorraCaracterDeCadena(texto,letra,n);
  
  return 0;
 
}
