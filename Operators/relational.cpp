/ /Challenge 3: Relational and Logical Operators
// A tea subscription service offers a discount if the user buys more than 12 cups or if they are a member for more than a year. Write a program that checks if the user qualifies for a discount based on their input.

#include <iostream>

using namespace std;

int main()
{

    int Tea_purchase;

    cout << "How many cup of tea did you buy: ";
    cin >> Tea_purchase;

    if (Tea_purchase > 20)

    {
        cout << "Gold badge" << endl;
    }
    else if (Tea_purchase >= 10 && Tea_purchase <= 20)
    {
        cout << "Silver badge" << endl;
    }
    else
    {
        cout << "No badge" << endl;
    }

    return 0;
}