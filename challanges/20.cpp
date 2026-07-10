// Challenge 4: Break and Continue
// Write a program that checks a list of tea types and serves tea for each type, except "Herbal Tea." If "Herbal Tea" is encountered, skip it using continue. If "No Tea" is encountered, stop the loop using break.

#include <iostream>
#include <string>

using namespace std;

int main()
{

    string Tea_type[5]{"Lemon tea", "Herbal tea", "black tea", "No tea", "orange tea"};

    for (int i = 0; i < 5; i++)
    {
        if (Tea_type[i] == "Herbal tea")
        {
            cout << "Skiping " << Tea_type[i] << "..." << endl;
            continue;
        }
        if (Tea_type[i] == "No tea")
        {
            cout << "No tea Out of loop" << endl;
            break;
            
        }

        cout << "Tea types " << Tea_type[i] << endl;
    }

    return 0;
}