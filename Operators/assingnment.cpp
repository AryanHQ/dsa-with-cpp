// Challenge 2: Assignment Operators
// Create a program where the user inputs the number of tea bags they have. If the number is less than 20, give them 10 extra bags using the += assignment operator. Display the updated total.

#include <iostream>

using namespace std;

int main()
{

    int Tea_bag;

    cout << "Enter the number of tea bags you have";
    cin >> Tea_bag;

    if (Tea_bag < 20)
    {
        // Tea_bag = Tea_bag + 5;
        Tea_bag += 10;
    }
    cout << "Your total bags are:" << Tea_bag;

    return 0;
}