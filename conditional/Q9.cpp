#include <iostream>
#include <string>

using namespace std;

int main()
{
    int age;
    double salary;

    cout << "Enter your age : ";
    cin >> age;
    cout << "Enter your monthly salary : ";
    cin >> salary;

    if (age < 0 || salary < 0)
    {
        cout << "Invalid Input" << endl;
    }
    else if ((age >= 21 && age <= 60) && (salary >= 25000))
    {
        cout << "Loan approved" << endl;
    }
    else
    {
        cout << "Loan rejected " << endl;
    }

    return 0;
}