/*21. Crear un programa que escriba en pantalla los números del 1 al 50 que sean múltiplos de 3.
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
