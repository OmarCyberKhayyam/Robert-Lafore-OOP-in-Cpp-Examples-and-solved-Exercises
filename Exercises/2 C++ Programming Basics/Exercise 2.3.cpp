// Exercise 2.3
// Write a program that generates the following output:
// 10
// 20
// 19
// Use an integer constant for the 10, an arithmetic assignment operator to generate the 20,
// and a decrement operator to generate the 19.

#include <iostream>
using namespace std;

int main()
{
    int var = 10;
    cout << var << endl;
    var *= 2;
    cout << var << endl;
    --var;
    cout << var;

    return 0;
}
