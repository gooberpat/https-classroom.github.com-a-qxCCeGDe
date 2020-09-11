#include <iostream> 
#include <fstream>

using namespace std;


int x = 0;
int y = 0;
int z = 0;
int duplicates = 0;


int main()
{
    cout << "Enter three integer values: \n";
    cin >> x >> y >> z;

    if (x == y) duplicates = 1;
    else if (x == z) duplicates = 1;

    cout << "duplicates: " << duplicates;

    return 0;
}