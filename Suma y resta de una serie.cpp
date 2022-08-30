/* Problema= Suma 1-2+3-4+5.......+/-N
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{ int N,i,S;
	cout<<"Suma o resta de digitos "<<endl;
	cout<<"Digite el valor hasta el que quieres sumar: "; cin>>N;
	
	S=0;
	for(i=0;i<=N;i++)
	{  
	   if(i%2!=0)
	   {
	   	S=S+i;
	   }
	   else
	   {
	   	S=S-i;
	   }
		
	}
	cout<<"La suma es: "<<S;
}
