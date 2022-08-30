// 9.	Hacer un programa para convertir un número entero en base 10 al sistema binario (base) por el método de divisiones sucesivas.

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{int N,d,B,i;
  cout<<"Conversion de decimal a Binario"<<endl;
  cout<<"Digite el numero: "; cin>>N;
  
  d=0;
  B=0;
  i=0;
  while(N>0)
  {
  	d=N%2;
  	N=N/2;
  	B=B+(d*pow(10,i));
  	i++;
  	
  }
  cout<<B;	
}
