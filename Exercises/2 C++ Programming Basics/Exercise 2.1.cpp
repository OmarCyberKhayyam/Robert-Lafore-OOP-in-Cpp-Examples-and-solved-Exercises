// Exercise 2.1
// Assuming there are 7.481 gallons in a cubic foot, write a program that asks
// the user to enter of gallons, and then displays the equivialent in cubic
// feet.

#include <iostream>

using namespace std;

int main()
{
    float gallons;
    cout << "Please, type a quantity on the gallons: ";
    cin >> gallons;
    float equivialent = gallons / 7.481;
    cout << gallons << " gallons are " << equivialent << " in cubic feet ";
	
    return 0;
}
