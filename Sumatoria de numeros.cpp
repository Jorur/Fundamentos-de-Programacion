/* Sumatoria de numeros
Sumar los numeros de 1 hasta N*/

#include <iostream>
using namespace std;

int main()
{
	int N,S,i;
	
	cout<<"Digite el numero hasta el que quiere sumar:"; cin>>N;
	
	S=0;
	for (i=2;i<=N;i=i+2)
	 {
	  S=S+i;
	  cout<<i<<endl;
     }
     
     
    /*i=1;
    while(i<=N)
     {
    	S=S+i;
    	cout<<i<<endl;
    	i++;
    	
	 }*/
	 cout<<"La sumatoria es: "<<S<<endl;
} 
