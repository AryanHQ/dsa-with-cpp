// Challenge 1: Arithmetic Operators
// Write a program that calculates the price of tea packs. A user enters the number of tea packs they want, and the price per pack. Apply a 10% tax to the total price and display the final cost.

#include <iostream>

using namespace std;

int main()
{

    int cups;
    double price_per_cup, total_price, discounted_price;

    cout << "Ente the number of tea cup: ";
    cin >> cups;

    cout << "Ente the price per cup: ";
    cin >> price_per_cup;

    total_price = cups * price_per_cup;

    // apply 5% discount if total price is above 100

    if (total_price > 100)
    {

        discounted_price = total_price - (total_price * 0.05);

        cout << "Discounted price is:" << discounted_price << endl;
    }
    else
    {
        cout << "Total price is: " << total_price << endl;
    }

    return 0;
}