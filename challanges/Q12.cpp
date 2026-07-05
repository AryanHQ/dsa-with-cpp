// Challenge 4: Switch Case
// Write a program that offers different tea brewing methods. The user selects a method (1 for Boiling, 2 for Steeping, 3 for Iced Tea), and the program prints the instructions for the selected brewing method. Use a switch statement to handle the selections.

# include <iostream>

using namespace std;

int main(){

    int Tea;
    cout << "Select tea brewing method you want \n";
    cout << "1. Boiling method \n";
    cout << "2. Steeping method \n";
    cout << "3. Iced method \n";
    cin >> Tea;

    switch (Tea)
    {
    case 1:
        cout << "Boil water and add tea leaves for 5 minutes. " << endl;
        break;
    case 2:
        cout << "teep tea leaves in hot water for 3-4 minutes. " << endl;
        break;
    case 3:
        cout << "Brew tea, cool it down, add ice cubes, and serve. " << endl;
        break;
    
    default:
        cout << "Invalid choice" << endl;
        break;
    }




    return 0;
}