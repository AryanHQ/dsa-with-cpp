// Challenge 1: While Loop
// Write a program that keeps asking the user to input the number of tea bags they have left. Stop when the number of bags is 0, and print a message that they are out of tea bags

// Start
//  Then we take a variable as teabags
//  Then display the message where we ask how many number of tea bag you have left
//  Then we take user input
//  Now we start while loop where we create a condition like teabags > 0
//  Then contionu the loop

#include <iostream>

using namespace std;

int main()
{
    int Tea_bags;

    while (true)
    {
        cout << "How many teabags you have left: ";
        cin >> Tea_bags;
        
        if (Tea_bags == 0)
        {
            break;
        }
        cout << "You have " << Tea_bags << " tea bag left\n";
    }

    cout << "You are out of tea bags" << endl;

    return 0;
}
