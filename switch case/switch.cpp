#include <iostream>

using namespace std;

int main () {

    int Choice;
    double Price;

    cout << "Select your tea\n";
    cout << "1. Green tea\n";
    cout << "2. masals tea\n";
    cout << "3. Oolong tea\n";
    cout << "Enter your choice in number: ";

    cin >> Choice;

    switch(Choice){
        case 1:
            Price = 2.0;
            cout << "You selected Green tea. Price: " << Price << endl;
            break;
            
        case 2:
            Price = 3.0;
            cout << "You selected masala tea. Price: " << Price << endl;
            break;

        case 3:
            Price = 4.0;
            cout << "You selected oolong tea. Price: " << Price << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        
    }  

    return 0;
}