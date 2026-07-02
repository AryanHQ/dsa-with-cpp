#include <iostream>

using namespace std;


int main() {

    int Tea_cups;

    double Price_per_cups = 2.5, Total_price, Discount;

    cout << "Enter the number of tea cups: ";
    cin >> Tea_cups;

    Total_price = Price_per_cups * Tea_cups;

    if (Tea_cups > 20){
        Discount = 0.20;
    }else if (Tea_cups>=10 && Tea_cups <= 20){
        Discount = 0.10;
    }else {
        Discount = 0;
    }

    // Total_price = Total_price -(Total_price * Discount);
    Total_price -= (Total_price * Discount);

    cout << "Total price after discount is " << Total_price << endl;
    


    return 0;
}