/*21. Crear un programa que escriba en pantalla los n�meros del 1 al 50 que sean m�ltiplos de 3.
*/

#include <iostream>
using namespace std;

int main ()
{int i;


for(i=1;i<=50;i++)
{
	if(i%3==0)
	{
		cout<<i<<endl;
	}
	
}

return 0;	
}
