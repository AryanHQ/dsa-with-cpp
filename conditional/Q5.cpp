#include <iostream>

using namespace std;

int main()
{
    int first_number;
    int second_number;

    cout << "Enter first number : ";
    cin >> first_number;
    cout << "Enter second number : ";
    cin >> second_number;

    if (first_number > second_number)
    {
        cout << "First number is larger" << endl;
    }
    else if (second_number > first_number)
    {
        cout << "Second number is larger" << endl;
    }
    else if (first_number == second_number)
    {
        cout << "Both numbers are equal" << endl;
    }

    return 0;
}