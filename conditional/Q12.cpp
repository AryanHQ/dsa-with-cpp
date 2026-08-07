#include <iostream>
#include <string>

using namespace std;

int main()
{
    double attendance;
    double marks;
    

    cout << "Attendance : ";
    cin >> attendance;
    cout << "Marks : ";
    cin >> marks;

    if (attendance >= 75 )
    {
    
        if (marks >= 40)
        {
            if (marks >= 75)
            {
                cout << "Passed with Distinction" << endl;
            }else{
                cout << "Passed" << endl;
            }
            
        
        }else{
            cout << "Failed" << endl;
        }
        
    }else{
        cout << "Not Eligible for Exam" << endl;
    }
    

    

    return 0;
}