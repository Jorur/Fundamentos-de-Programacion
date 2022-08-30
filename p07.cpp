/* Programa; p07.cpp
objetivo. ordenar tres valores de menor a mayor
*/ 

#include <iostream>
using namespace std;

int main()
{ int A,B,C;
cout<< "Digite los valores A,B,C"<<endl;
cin>>A>>B>>C; 

if (A<B && B<C )
{cout<<"Orden:"<<A<<" "<<B<<" "<<C;} // orden ABC

else if (A<C && C<B)
{cout<<"Orden"<<A<<" "<<C<<" "<<B;} // orden ACB

	 else if (B<A && A<C)
	 {cout<<"Orden:"<<B<<" "<<A<<" "<<C;} // orden BAC
	 
      	else if (B<C && C<A)
        {cout<<"Orden"<<B<<" "<<C<<" "<<A;} // orden BCA
      
       		else if (C<A && A<B )
      		{cout<<"Orden"<<C<<" "<<A<<" "<<B; } // orden CAB
      
      			else
      			cout<<"Orden"<<C<<" "<<B<<" "<<A; //Orden CBA

return 0;
}
