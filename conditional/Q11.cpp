#include <iostream>
#include <string>

using namespace std;

int main()
{
    string username;
    string password;
    string admin;

    cout << "Username : ";
    cin >> username;
    cout << "Password : ";
    cin >> password;

    if (username == "admin" && password == "1234" )
    {
    
    cout << "Do you have admin access? (Y/N):";
    cin >> admin;
        if (admin == "Y")
        {
           cout << "Welcome Admin" << endl;
        }else{
            cout << "Welcome User" << endl;
        }
        
    }else {
        cout << "Login Failed" << endl;
    }
    

    

    return 0;
}