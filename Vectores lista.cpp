/*Vectores 
Leer lista de nombres de tamaño n

A={Juan,Pedro,Roberto,Luis,Maria, Lourdes}

y se imprime al reves 
*/

#include<iostream>
using namespace std;

int main()
{string lista[100]; int n,i;
   cout<<"Cuantas personas hay? "; cin>>n;
   
   for(i=0;i<n;i++)
   {
   	cin>>lista[i];
   }
   cout<<"\nLista invertida\n";
   for(i=0;i<n;i++)
   {
   	cout<<lista[n-i-1]<<", "; //Lista invertida
   }
   
   cout<<"\n Gracias!";
   return 0;	
}
