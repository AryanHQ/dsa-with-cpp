#include <iostream>
using namespace std;

int main(){
    int base;
    int exponent;
    cout << "Enter Base :  ";
    cin >> base;
    cout << "Enter Exponent :  ";
    cin >> exponent;
    int i = 1;
    int Z = 1; 
    while (i<= exponent)
    {
        Z =  Z* base;

        
        i++;
    }
    cout << "Answer = " << Z << endl;

    return 0;
    
}