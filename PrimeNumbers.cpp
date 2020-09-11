  
#include <iostream>
using namespace std;

int main()
{
    
int x = 0;
int y = 0;
int z = 0;
int flag = 0;


	for (y = 2; y <= 100; y++)
    {   
        for (x=2;  x < y;  x++)
        {    
            if ( (y % x) == 0) flag = 1;           
        }       
        
		if (flag == 0) 
        {   
            cout << y;    
            cout << " ";
        }
    x++;
    flag = 0;
    }
  
}
