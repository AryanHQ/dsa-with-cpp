// Challenge 3: Nested If-Else
// Write a program that checks the temperature of tea water input by the user:

#include <iostream>

using namespace std;

int main()
{

    int Temperature;

    cout << "Enter the tea temperature you want in DC ?" << endl;
    cin >> Temperature;

    if (Temperature > 100)
    {
        cout << "Too hot!" << endl;
    }
    else if (Temperature >= 80 && Temperature <= 100)
    {
        cout << " Perfect temperature." << endl;
    }
    else 
    {
        cout << "Too cold! " << endl;
    }

    return 0;
}