// Challenge 3: Relational and Logical Operators
// A tea subscription service offers a discount if the user buys more than 12 cups or if they are a member for more than a year. Write a program that checks if the user qualifies for a discount based on their input.

#include <iostream>

using namespace std;

int main()
{

    int cups;
    bool member;

    cout << "How many cup did you buy: ";
    cin >> cups;

    cout << "If you a member more than a year (for yes enter 1 / for no enter 0)";
    cin >> member;

    if (cups > 12 || member == 1)
    {
        cout << "You are elegible for a discount" << endl;
    }
    else
    {
        cout << "Sorry you are not elegible for discount" << endl;
    }

    return 0;
}