/* Sumatoria de Pares
2+4+6....+N
*/

#include <iostream>
using namespace std;

int main()
{
	int N,S,i;
	
	cout<<"Digite el numero hasta el que quiere sumar:"; cin>>N;
	
	S=0;
	for (i=1;i<=N;i++)
	 {
	  if(i%2==0)
	    {
	    S=S+i;
	    cout<<i<<endl;
	    }
	   
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
