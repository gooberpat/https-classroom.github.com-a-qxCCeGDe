#include <iostream>
using namespace std;

int main ()
{
	char character = 65;
	while (character <= 90)
	{
        cout  << character++;
		cout << " ";
		if (character % 5 == 0)  cout << "\n";
	}  
    return 0;
}