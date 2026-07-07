#include <iostream>
#include <string>

using namespace std;

int main()
{

    string Tea_type[5] = {"Oolong tea" , "Orange tea" , "Green tea" , "Black tea" , "Lemon tea"};

    for (int i = 0 ; i < 5 ; i++){
        if(Tea_type[i] == "Black tea"){
            cout << "Skipping the " << Tea_type[i] << endl;
            continue;
        }
        
        cout << "Brewing " << Tea_type[i] << "..." << endl;
    }
    

    return 0;
}