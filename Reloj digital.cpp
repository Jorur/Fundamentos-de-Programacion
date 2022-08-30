//Reloj digital

#include <iostream>
using namespace std;

int main()
{int h,min,s;
    
    for(h=0;h<=23;h++)
    {
    	for(min=0;min<60;min++)
    	{
    		for(s=0;s<60;s++)
    		{
    			system("cls");
				cout<<h<<":"<<min<<":"<<s<<endl;
    			
			}
		}
	}
	
	
	
	return 0;
}
