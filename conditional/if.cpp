#include <iostream>
#include <string>

using namespace std;

int main()
{

    string Tea_order;

    cout << "Enter your tea order: ";
    getline(cin, Tea_order);

    if (Tea_order == "Green Tea")
    {
        cout << "You have ordered Green Tea " << endl;
    }

    return 0;
}