/*
Mostrar los números del N al 1 en forma descendente hasta llegar al valor 1, y a su vez mostrar su complemento a N. que salga (Numero, Complemento a N)
Ejemplo Si N=13,  las salida es: (13, 0), (12, 1), (11, 2), (10, 3), (9, 4), (8, 5), (7, 6), (6, 7), (5, 8), (4, 9), (3, 10), (2, 11), (1, 12).
Jorge Urioste Hurtado
*/

#include <iostream>
using namespace std;

int main()
{
	int N,i,R,C=0,cop;
	
	cout<<"Digite el valor de n: "; cin>>N;
	
	cop=N;
	cout<<N<<" ";
	cout<<C<<endl;
	
	
	for(i=N;i>1;i--)
	{
		R=N-1;
		cout<<R<<" ";
		C=cop-R;
		cout<<C<<endl;
		N=R;
	}
	return 0;
}
