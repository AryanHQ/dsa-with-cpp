#include <iostream>
#include <string>

using namespace std;

int main() {

    string password;

    while (true)
    {
        cout << "Enter the password: ";
        cin >> password;

        if (password == "1234")
        {
            break;
        }
        
        cout << "Wrong password " << password << "..." << endl; 
    }

    cout << "correct pasword " << endl;

    return 0;
    

}