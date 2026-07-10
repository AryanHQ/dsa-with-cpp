// Challenge 5: Nested Loops
// Write a program that displays a tea brewing schedule. For each day of the week (outer loop), brew 2 cups of tea for breakfast, lunch, and dinner (inner loop).

#include <iostream>
#include <string>

using namespace std;

int main() {

    string tea_time [3] {"Breakfast" , "lunch" , "dinner"};
    
    for (int i = 1; i <= 7; i++){
        
        cout << "Tea Brewing shedule for day: " << i << endl;
    for (int j = 0; j < 3 ; j++)
    
        cout << "Brewing 2 cup tea for " << tea_time[j] << endl;
    }
    





    return 0;
}