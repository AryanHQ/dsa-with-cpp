#include <iostream>

using namespace std;

int main() {
    int N ;
    int i = 1;
    cout <<"Enter N : ";
    cin >> N;
    double square;
    double sum_sq;
    
    while (i <= N)
    {
        square = i ;
        square = square * i;
        sum_sq = sum_sq + square;
        i++;
    }
    cout << sum_sq  << endl;
    
    return 0;
}