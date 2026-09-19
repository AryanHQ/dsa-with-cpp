#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int lastd = 0;
    int product = 1;


    while (n > 0)
    {
        lastd = n %10;
        n = n/10;
        cout << lastd << "\n";

        product = product * lastd;

    }
    cout << product << "\n";
    





    return 0;
}