// Ejercicio 4 char: palabaras capicua


#include <iostream>
#include <string.h>
using namespace std;
#define NMAX 100


bool Capicua(char A[])
{int i,n; char aux; bool pal;
    n=strlen(A);
    pal=true;
	for(i=0;i<n/2;i++)
	{
       if(A[i]!=A[n-i-1])
       {
       	pal=false; break; 
	   }
	  
	}
	return pal;
}

int main()
{
	char palabra[NMAX]; int n;
	
	cout<<"Digite su palabra: "<<endl;
	cin.get(palabra,NMAX);

	if(Capicua(palabra))
	{
		cout<<"Es capicua";
	}
	else
	{
	  cout<<"No es capicua";	
	}
	
	

	
}
