#include <iostream>
#include <string>

using namespace std;

int main()
{

    string sugar;

    do
    {
        cout << "Would you like to add more sugar (yes/enough): ";
        cin >> sugar;

    } while (sugar != "enough");

    cout << "Ok no more sugar \n";

    return 0;
}