/*12.Hacer un programa para calcular el MCM (mínimo común múltiplo) de dos números enteros, 
donde MCM= (AxB)/MCD.
*/

#include<iostream>
using namespace std;

int mcd(int x, int y)
{int r;

 r=0;
 while(y!=0)
 {
 	r=x%y;
 	x=y;
 	y=r;
 }
 return x;
	
}

int main()
{int A,B,R;

cout<<"Calculadora del minimo comun multiplo"<<endl;
cout<<"Digite el mayor numero: "; cin>>A;
cout<<"Digite el menor numero: "; cin>>B;

R= A*B/mcd(A,B);

cout<<"El mcm es: "<<R;


return 0;	
}
