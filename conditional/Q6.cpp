#include <iostream>

using namespace std;

int main()
{
    int marks;

    cout << "Enter Your marks : ";
    cin >> marks;


    if (marks > 100)
    {
        cout << "Invalid Marks" << endl;
    }
    
    else if (marks >= 90 )
    {
        cout << "A" << endl;
    }
    else if (marks >= 80 )
    {
        cout << "B" << endl;
    }
    else if (marks >= 70)
    {
        cout << "C" << endl;
    }
    else if (marks >= 60)
    {
        cout << "D" << endl;
    }
    else if (marks >= 40)
    {
        cout << "E" << endl;
    }
    else if (marks < 0)
    {
        cout << "Invalid Marks" << endl;
    }
    else if (marks < 40 )
    {
        cout << "F" << endl;
    }

    return 0;
}