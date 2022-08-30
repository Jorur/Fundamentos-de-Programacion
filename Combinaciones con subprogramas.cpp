/*
Forumla de combinaciones 
con subprogramas
*/

#include<iostream>
using namespace std;

int fact (int n)
{int i,p;
	p=1;
	for(i=1;i<=n;i++)
	 {
	  p=p*i;
     }
	return p;
}



int main()
{int n,k,R;

cout<<"Digite el numero de personas: "; cin>>n;
cout<<"Digite el numero de grupos: "; cin>>k;

R= fact(n)/(fact(k)*fact(n-k));
cout<<"El resultado es: "<<R<<endl;



    	
}
