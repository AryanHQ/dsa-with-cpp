// Challenge 1: If Statement
// Write a program that asks the user for their favorite tea. If they choose "Oolong," print a message saying, "You have excellent taste!"

#include <iostream>
#include <string>

using namespace std;

int main()
{

    string Tea;
    cout << "Enter your favourite tea: " << endl;
    cin >> Tea;

    if (Tea == "Oolong")
    {
        cout << "You have excellent tast" << endl;
    }

    return 0;
}