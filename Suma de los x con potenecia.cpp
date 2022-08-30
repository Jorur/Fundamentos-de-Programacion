/* Suma de numeros X
S= x+x^2+x^3+x^4+...+x^N
*/

#include <iostream>
using namespace std;

int main()
{ int i,N; float X,S,P;
    cout<<"Digite N,X"<<endl;
    cout<<"N: "; cin>>N;
    cout<<"X: "; cin>>X;
    
    S=0;
    P=X;
    for(i=1;i<=N;i++) // N: cantidad de veces, i= iterador // for(i=N;i>0;i--)
    {
    	S=S+P;
    	P=P*X; // Generador de potencias 
	}
	cout<<"La sumatoria de X: "<<S<<endl;
	return 0;
}
