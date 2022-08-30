/* Ejercicio: Serie de Fibonacci
0 1 1 2 3 5 8 13 21 34 ...
1) Generar los primeros n elementos de la secuencia fibonacci
2) Cuantos conejos hay en el dia N?
3) Cada 5 dias se reproducen los conejos
*/

#include <iostream>
using namespace std;

int main()
{int N,i,A,B,C,S;

   cout<<"Secuencia Fibonacci"<<endl;
   cout<<"Digite la cantidad de numeros: "; cin>>N;
   A=0;
   B=1;
   cout<<A<<endl;
   cout<<B<<endl;
   S=A+B;
   
   for(i=3;i<=N;i++) // for(i=1;i<=N;i=i+5) Para los dias 
   {
   	C=A+B;
   	S=S+C;
   	cout<<C<<endl;
   	A=B; //Desplazamiento de C y B
   	B=C;
   }
	cout<<"El total de conejos al dia "<<N<<": "<<S;
	
	return 0;
}
