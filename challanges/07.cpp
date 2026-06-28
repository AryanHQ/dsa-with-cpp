#include <iostream>

using namespace std;

int main (){

    int pages;

    cout << "Enter the number of pages you want:";
    cin >> pages;

    while (pages > 0)
    {
        pages--;
        cout << "You have " << pages << " page remaning...... " << endl;
    }

    return 0;
    
}