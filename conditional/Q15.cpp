#include <iostream>
using namespace std;

int main()
{
    int age;
    char ticketType;

    cout << "Enter age: ";
    cin >> age;

    // Step 1
    if (age < 5)
    {
        cout << "Entry Free" << endl;
        return 0; // Stop the program
    }

    // Step 2
    cout << "Enter Ticket Type (N/P): ";
    cin >> ticketType;

    double ticketPrice;
    double discount = 0;
    double finalPrice;

    // Step 3: Decide ticket price
    if (ticketType == 'N')
    {
        ticketPrice = 200;
    }
    else if (ticketType == 'P')
    {
        ticketPrice = 350;
    }
    else
    {
        cout << "Invalid Ticket Type" << endl;
        return 0;
    }

    // Step 4: Senior citizen discount
    if (age >= 60)
    {
        discount = ticketPrice * 0.20;
    }

    // Step 5
    finalPrice = ticketPrice - discount;

    cout << "\nTicket Price : " << ticketPrice << endl;
    cout << "Discount    : " << discount << endl;
    cout << "Final Price : " << finalPrice << endl;

    return 0;
}