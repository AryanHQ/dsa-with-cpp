#include <iostream>
#include <string>

using namespace std;

int main()
{
    string username;
    string password;

    cout << "Username : ";
    cin >> username;
    cout << "Password : ";
    cin >> password;


    if (username == "admin" && password == "1234")
    {
        cout << "Login Successful" << endl;
    }
    else
    {
        cout << "Invalid Username or Password " << endl;
    }

    return 0;
}