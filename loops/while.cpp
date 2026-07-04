// 1. While Loop
// Challenge: Write a program that keeps track of tea orders. Each time a cup of tea is made, decrease the number of cups remaining. The loop should run until all cups are served.

// START

// Declare an integer variable Tea_cups

// Display "Enter the number of tea cups: "
// Read Tea_cups

// WHILE Tea_cups is greater than 0 DO
//     Display "Serving a cup of tea"
//     Display Tea_cups and "remaining"
//     Decrease Tea_cups by 1
// END WHILE

// Display "All tea cups are served."

// END













#include <iostream>

using namespace std;

int main()
{

    int Tea_cups;

    cout << "Enter the number of tea cups: ";
    cin >> Tea_cups;

    // while loop 

    while (Tea_cups > 0)
    {
        Tea_cups--;
        cout << "Serving a cup of tea \n" << Tea_cups << " remaning" << endl;
        // Tea_cups--;
    }
    cout << "All tea cups are served. " << endl; 

return 0;
}