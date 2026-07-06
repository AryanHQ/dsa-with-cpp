#include <iostream>
#include <string>

using namespace std;

int main()
{

    string responce;

    while (true)
    {
        cout << "Do you want more tea (type 'stop' to exit? )";
        getline(cin, responce);

        if (responce == "stop")
        {
            // exit the loop
            break;
        }

        cout << "Here is your anothes cup of tea. \n";
    }
    cout << "No more tea will be served to you \n";

    return 0;
}