#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double rateA = 15.00;
    const double rateB = 12.00;
    const double rateC = 9.00;
    int ClassA_Seats = 0;
    int ClassB_Seats = 0;
    int ClassC_Seats = 0;
 
    double ClassA_Revenue = 0;
    double ClassB_Revenue = 0;    
    double ClassC_Revenue = 0;
    double Total_Revenue = 0;
    
    cout << "How many Class A seats were sold? ";
    cin >> ClassA_Seats;
    ClassA_Revenue = ClassA_Seats * rateA;
    
    cout << "How many Class B seats were sold? ";
    cin >> ClassB_Seats;
    ClassB_Revenue = ClassB_Seats * rateB;    
    
    cout << "How many Class C seats were sold? ";
    cin >> ClassC_Seats;
    ClassC_Revenue = ClassC_Seats * rateC;    
    
    Total_Revenue = ClassA_Revenue + ClassB_Revenue + ClassC_Revenue;
    
    
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    
    cout << "\nThe Revenue from Class A seats is: $";
   
    cout << ClassA_Revenue;

    cout << "\nThe Revenue from Class B seats is: $";
    cout << ClassB_Revenue;

    cout << "\nThe Revenue from Class C seats is: $";
    cout << ClassC_Revenue;


    cout << "\nThe Total Revenue is: $";
    cout << Total_Revenue;

}
