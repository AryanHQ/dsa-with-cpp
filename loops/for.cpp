// 3. For Loop
// Challenge: Write a program that prints the brewing instructions for making 5 cups of tea. The brewing process should be printed once for each cup using a for loop

// Start

// S-1 Declare an integer variable named Teacup.

// S-2 Ask the user how many cups of tea they want to prepare.

// S-3 Take the user's input and store it in the Teacup variable.

// S-4 Start the for loop.

// S-5 Initialize the loop variable with i = 1 because we want to start counting from the first cup.

// S-6 Continue the loop while i is less than or equal to Teacup (i <= Teacup).

// S-7 After each iteration, increase the value of i by 1 (i++).

// S-8 In each iteration, print:
//      "Brewing a cup i of tea..."

// S-9 When the condition (i <= Teacup) becomes false, the loop stops.

// S-10 Execute the code outside the loop:
//       Print "Outside of loop!"

// End








#include <iostream>
#include <string>

using namespace std;

int main() {

    

    int Teacup;
    cout <<"Enter how many cup do you want to prepare: ";
    cin >> Teacup;

    for (int i = 1; i <= Teacup; i++){
        cout << "Brewing " << i<< " cup of tea.." << endl;
    }

    

    cout << "Out side of loop!" << endl;

    return 0;
}