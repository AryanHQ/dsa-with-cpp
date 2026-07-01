#include <iostream>

using namespace std;

int main()
{

    bool Is_student;
    int Cups;

    cout << " Are you a student ( 1 for yes and 0 for no ) ? " << endl;
    cin >> Is_student;

    cout << "How many cup of tea have you purchaged ? " << endl;
    cin >> Cups;

    if (Is_student || Cups >= 15)
    {

        cout << " You are elegible for a discount" << endl;
    }
    else
    {
        cout << " You are not elegible for a discount" << endl;
    }

    return 0;
}