// Challenge 1: Arithmetic Operators
// Write a program that calculates the price of tea packs. A user enters the number of tea packs they want, and the price per pack. Apply a 10% tax to the total price and display the final cost.

#include <iostream>

using namespace std;

int main()
{

    int Tea_pack;
    double Price_per_pack;

    cout << "How many tea packs you want: " << endl;
    cin >> Tea_pack;

    cout << "Enter the price per pack: " << endl;
    cin >> Price_per_pack;

    double Total_price(Price_per_pack * Tea_pack);
    double Tax(Total_price * 0.1);
    double Final_cost(Total_price + Tax);

    cout << "You have to pay: " << Final_cost << " including 10% tax" << endl;
    return 0;
}