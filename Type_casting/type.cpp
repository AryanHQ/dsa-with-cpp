#include <iostream>

using namespace std;

int main() {

    float Tea_price = 49.99;
    int Rounded_tea_price = (int) Tea_price;

    cout << Rounded_tea_price << endl ;

    int Tea_quantity = 5;
    double Total_price = Tea_price * Tea_quantity;

    cout << Total_price << endl;



    return 0;
}