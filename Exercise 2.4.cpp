// Exercise 2.4
// Write a program that displays your favorite poem. Use an appropriate escape sequence
// for the line breaks. If you don’t have a favorite poem, you can borrow this one by Ogden
// Nash:

#include <iostream>
using namespace std;

int main()
{
    cout << "What is this life if, full of care,\nWe have no time to stand and stare.\n\n"
         << "No time to stand beneath the boughs\nAnd stare as long as sheep or cows.\n\n"
         << "No time to see, when woods we pass,\nWhere squirrels hide their nuts in grass.\n\n"
         << "No time to see, in broad daylight,\nStreams full of stars, like skies at night.\n\n"
         << "No time to turn at Beauty's glance,\nAnd watch her feet, how they can dance.\n\n"
         << "No time to wait till her mouth can\nEnrich that smile her eyes began.\n\n"
         << "A poor life this if, full of care,\nWe have no time to stand and stare.";

    return 0;
}