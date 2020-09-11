cout <<"-----------\n";#include <iostream> 
#include <fstream>

using namespace std;

int number = 0;
long sum = 0;
unsigned int mininum = 0xFFFFFFFF;
int maximum = 0;
unsigned long average = 0;
int x = 0;
int y = 0;

int main()
{
    ofstream outfile;           // open a file in read mode.
    outfile.open("pat1.dat");   // opens file "pat1.txt for writing"

   
    cout << "Enter a number: ";
    cin >> number;
    cout << "\nWriting to the file" << endl; 
    for (x = 1; x <= number; x++)
    {
        y = rand();

        outfile << y << endl;   // writes y to file
        cout << y << endl;      // writes y to consol
    }    
        cout <<"-----------\n";

    outfile.close();            // closes file



   
   ifstream infile;             // open a file in read mode.
   infile.open("pat1.dat");     // opens file "pat1.txt for reading"
 
   cout << "Reading from the file" << endl; 

    for (x = 1; x <= number; x++)
    {
        infile >> y;            
        cout << y << endl;
        
        sum = sum + y;
        
        if (y > maximum)   maximum = y;
        
        if (y < mininum) mininum = y;
        
    }
    infile.close();              // close the opened file.
   
   cout <<"-----------\n";    
    cout << "Sum is:" << sum << endl;
    cout << "Smallest is: " << mininum << endl;
    cout << "Greatest is: " << maximum << endl;

    return 0;
}
