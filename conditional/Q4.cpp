#include <iostream>

using namespace std;

int main()
{
    int marks;
    cout << "Enter your marks : ";
    cin >> marks;

    if (marks > 100)
    {
        cout << "Invalid Marks" << endl;
    }
    else if (marks >= 40)
    {
        cout << "Pass" << endl;
    }
    else if (marks <= 0)
    {
        cout << "Invalid Marks" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }

    return 0;
}