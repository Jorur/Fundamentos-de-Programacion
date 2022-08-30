/*
Un n�mero de Fibonacci (de ra�z 1,1) se obtiene de la siguiente forma:   F0 = 1, F1 = 1,  
luego el siguiente o tercer n�mero se obtiene sumando F2=F1 + F0= 1+1=2.     
Cada n�mero de Fibonacci se obtiene sumando los dos �ltimos, es decir, Fi = Fi-1 + Fi-2,  i=2, 3, 4
La secuencia de n�meros Fibonacci es {1, 1, 2, 3, 5, 8, 13, 21, 34,  }
Hallar el total de conejos en el n-esiomo d�a.
Ejemplo: si n=7, el total de conejos en el 7mo d�a es 20 conejos.(1+1+2+3+5+8)
Jorge Urioste Hurtado
*/

#include <iostream>
using namespace std;

int main()
{int N,i,A,B,C,S;

   cout<<"Secuencia Fibonacci"<<endl;
   cout<<"Digite la cantidad de numeros: "; cin>>N;
   A=0;
   B=1;
   S=A+B;
   
   for(i=3;i<=N;i++)  
   {
   	C=A+B;
   	S=S+C;
   	A=B; 
   	B=C;
   }
	cout<<"El total de conejos al dia "<<N<<": "<<S;
	
	return 0;
}
