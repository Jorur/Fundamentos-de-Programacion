/* Vectores
Sumar los valores enteros de un vector de tamaño n

Ej: A[6]={4,6,9,23,7,1}

S=4+6+9+23+7+1
Pasos: 1. Leer los datos  n=6 y los datos 4,6,9,23,7,1
       2. Sumar los elementos del vector
       3. Imprimir la suma y los datos del vector
       Suma=50
*/

#include <iostream>
using namespace std;

int main()
{int A[100],n,S,i;
     
     cout<<"Tamaño del vector: "; cin>>n;
     
     S=0;
     for(i=0;i<n;i++)
     {
	 cin>>A[i];
	 S=S+A[i];
     }
     
     cout<<"La suma es: "<<S<<endl;
     for(i=0;i<n;i++)
     {
	 cout<<A[i]<<",";
     }
     
     return 0;
}
