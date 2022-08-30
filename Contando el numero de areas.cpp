/*
Contando numeros de areas
*/



#include <iostream>
using namespace std;

int main()
{ float L,A; int i,N;
   cout<<"Digite cunatas areas quiere: "; cin>>N;
   i=1; 
   while (i<=N)
     {
	  cout<<"Area"<<endl;
	  cout<<"Digite el lado:";
	  cin>>L;
	  A= L*L;
	  cout<<"Area cuadrado: "<<A<<endl;
	  i++;
	 }
return 0;	 
}
	 
	
