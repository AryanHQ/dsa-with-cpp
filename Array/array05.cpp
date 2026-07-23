// Question 3: Cricket Runs

// Write a program that creates an array named runs with these values:

// 45, 62, 18, 90, 76

// Print the output like this:

// Match 1 Runs: 45
// Match 2 Runs: 62
// Match 3 Runs: 18
// Match 4 Runs: 90
// Match 5 Runs: 76
// Bonus Challenge (Optional)

// After printing all the runs, print this line:

// Best Score: 90





#include <iostream>
using namespace std;

int main(){
    int runs[5] {45, 62, 18, 90, 76};
    
    cout << "Match 1 Runs: " << runs[0] << endl;
    cout << "Match 2 Runs: " << runs[1] << endl;
    cout << "Match 3 Runs: " << runs[2] << endl;
    cout << "Match 4 Runs: " << runs[3] << endl;
    cout << "Match 5 Runs: " << runs[4] << endl;

    cout << "Best score: " << runs[3] << endl;
    return 0;
}