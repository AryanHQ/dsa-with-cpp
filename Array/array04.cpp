// Question 1: Student Marks

// Create an array named marks with 5 values:

// 78, 85, 91, 67, 88

// Print:

// Student 1 Marks: 78
// Student 2 Marks: 85
// ...
// Student 5 Marks: 88
// To print ° type Ctrl + Shift + U the type 00b0 then enter

#include <iostream>
using namespace std;

int main(){
    int Temperature[7] {30, 32, 31, 29, 35, 34, 33};
    cout << "Temperature on Day 1: " << Temperature[0] << "°C" << endl;
    cout << "Temperature on Day 2: " << Temperature[1] << "°C" << endl;
    cout << "Temperature on Day 3: " << Temperature[2] << "°C" << endl;
    cout << "Temperature on Day 4: " << Temperature[3] <<"°C" << endl;
    cout << "Temperature on Day 5: " << Temperature[4] << "°C" <<endl;
    cout << "Temperature on Day 6: " << Temperature[5] << "°C" <<endl;
    cout << "Temperature on Day 7: " << Temperature[6] <<"°C" << endl;
    return 0;
}