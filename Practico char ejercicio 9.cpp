/*9.	Dado dos conjuntos de caracteres (A y B), realizar un programa para realizar la intersección de conjuntos. 
El conjunto resultante es C.
*/

#include<iostream>
#include<string.h>
using namespace std;




int main()
{
	char A[100],B[100],C[100]; int n,i,j,m,aux;
	
	cout<<"Digite el primer conjunto de caracteres por favor"<<endl;
	cin.get(A,100);
	cin.ignore();
	
	cout<<"Digite el segundo conjunto de caracteres por favor"<<endl;
	cin.get(B,100);
    cin.ignore();
    
	n=strlen(A);
	m=strlen(B);
	
	j=0; aux=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(A[i]!=',' && A[i]!=' ')
			{
			
		 	if(A[i]==B[j])
		 	{ 
		 	C[aux]=A[i];
		 	C[aux+1]=',';
		 	aux=aux+2;
		    }
		    }
		}
	}
	C[aux]=' ';
	cout<<"La interseccion es: "<<C;
	
	return 0;
}
