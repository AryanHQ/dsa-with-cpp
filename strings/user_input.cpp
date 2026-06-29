#include <iostream>
#include <string>

using namespace std;

int main() {
    string User_tea;
    int Tea_quantity;

    cout << "What would you like to order:";
    getline(cin , User_tea);

    // ask for quantity

    cout << "How many cup of " << User_tea << " would you like to have ?" << endl;
    cin >> Tea_quantity;

    cout << Tea_quantity << ":";
    cout << User_tea << endl;
    
    return 0;
}