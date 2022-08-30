//Sacar las letras de un palabra y poner las vocales y ponerlas en un vector y las consonantes en otro vector

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char palabra[100],vocales[20],consonantes[20]; int n,i,j,k; 
	
	cout<<"Ingrese la palabra por favor: "<<endl;
	cin.get(palabra,100);
	n=strlen(palabra);
	
	j=0;
	k=0;
	for(i=0;i<n;i++)
	{
		if(palabra[i]=='a' || palabra[i]=='e'|| palabra[i]=='i' || palabra[i]=='o' || palabra[i]=='u' )
		{
			vocales[j]=palabra[i];
			j++;
		}
		else
		{
			consonantes[k]=palabra[i];
			k++;
		}
	}
	
	cout<<"Las vocales son: "<<endl;
	
	for(i=0;i<j;i++)
	{
		cout<<i+1<<")"<<vocales[i]<<endl;
	}
	
	cout<<"Las consonantes son: "<<endl;
		for(i=0;i<k;i++)
	{
		cout<<i+1<<")"<<consonantes[i]<<endl;
	}
	
	return 0;
}
