#include <iostream>

using namespace std;

int main() {
    int N ;
    int i = 1;
    cout <<"Enter N : ";
    cin >> N;
    
    while (i <= N)
    {
        double square = i ;
        square = square * i;
        cout << square  << endl;
        i++;
    }
    
    return 0;
}