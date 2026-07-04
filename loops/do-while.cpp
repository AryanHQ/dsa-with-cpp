
// 2. Do-While Loop
// Challenge: Create a program that asks the user if they want more tea. Keep asking them until they type "no" (case-insensitive), using a do-while loop.


// start
// then we take string var as responce
// then we use do for continueous output
// then we use getline for user responce
//Now in while

// We made a condition where the user can type yes or no.
// If the user types "yes", the loop continues and asks the same question again.
// If the user types anything else, like "abc", the loop also continues and asks the same question again.
// This loop continues until the user types "no" or "NO".
// Whenever the user types "no" or "NO", the loop stops and the code outside the loop is executed.








#include <iostream>
#include <string>

using namespace std;

int main() {
    string response;

    do {
        cout << "Do you want more tea (yes/no): ";
        getline(cin, response);
    } while (response != "no" && response != "NO");

    cout << "Okay, no more tea!" << endl;

    return 0;
}
