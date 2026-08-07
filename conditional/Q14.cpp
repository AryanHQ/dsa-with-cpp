#include <iostream>
using namespace std;

int main()
{
    int units;
    double bill, discount = 0, finalBill;

    cout << "Enter Units: ";
    cin >> units;

    // Step 1: Input Validation
    if (units < 0)
    {
        cout << "Invalid Input" << endl;
    }
    else
    {
        // Step 2: Calculate Bill
        if (units <= 100)
        {
            bill = units * 5;
        }
        else if (units <= 300)
        {
            bill = units * 7;
        }
        else
        {
            bill = units * 10;
        }

        // Step 3: Apply Discount
        if (bill > 2000)
        {
            discount = bill * 0.05;
        }

        // Step 4: Final Bill
        finalBill = bill - discount;

        cout << "Original Bill: ₹" << bill << endl;
        cout << "Discount: ₹" << discount << endl;
        cout << "Final Bill: ₹" << finalBill << endl;
    }

    return 0;
}