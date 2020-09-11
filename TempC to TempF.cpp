#include <iostream>
using namespace std;

int main()
{    
    int c = 0;
    int f = 0;

    cout << "Enter temperature in celsius: ";
    cin >> c;
    f = ( ( (c * 9) / 5) + 32);
    cout << f;
}
