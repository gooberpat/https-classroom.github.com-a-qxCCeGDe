/////////////////
//Assignment 2-1
/////////////////

#include <iostream>
using namespace std;

int main()
{
    char  selection;
    cout << "Enter your choice among A, B, C\n";
    cin >> selection;
    switch(selection)
    {
        case 'a': case 'A':
        cout << "Your choice is A\n";
        break;

        case 'b': case 'B':
        cout << "Your choice is B\n";
        break;

        case 'c': case 'C':
        cout << "Your choice is C\n";
        break;       

        default:
        cout << "Not a good choice\n";
    }
    return 0;
}

/////////////////
//Assignment 2-2
/////////////////

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
