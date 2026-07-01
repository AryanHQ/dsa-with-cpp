#include <iostream>

using namespace std;

int main() {

    int hour;

    cout << "Enter the current hour: ";
    cin >> hour;

    if (hour >= 8 && hour < 18){
        cout << "Tea shop is open!" << endl;

    }else{
        cout << "The shop is close!" << endl;
    }
    return 0;
 
}