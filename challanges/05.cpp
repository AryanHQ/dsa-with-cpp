// Challenge 2: Assignment Operators
// Create a program where the user inputs the number of tea bags they have. If the number is less than 20, give them 10 extra bags using the += assignment operator. Display the updated total.

#include <iostream>

using namespace std;

int main() {

    int Tea_bags;

    cout << "How many tea bags you have: ";
    cin >> Tea_bags;

    if (Tea_bags < 20)
    {
        Tea_bags+=10;

        cout << "Here is your extra 10 bags: " << Tea_bags << endl;
    }else{
        cout << "You have " << Tea_bags << " tea bags.." << endl;
    }    
    return 0;
}