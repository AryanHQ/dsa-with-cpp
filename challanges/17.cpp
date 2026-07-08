#include <iostream>

using namespace std;

int main() {

    int row = 1;

    while (row <= 5) {

        int star = 1;

        while (star <= row) {
            cout << "*";
            star++;
        }

        cout << endl;
        row++;
    }

    return 0;
}