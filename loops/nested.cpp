#include <iostream>
#include <string>

using namespace std;

int main()
{

    string Tea_type[5] = {"Oolong tea" , "Orange tea" , "Green tea" , "Black tea" , "Lemon tea"};

    for (int i = 1 ; i < 5 ; i++){
        
            cout << "Brewing " << Tea_type[i] << "..." << endl;
            
            for (int j = 1 ; j <= 3 ; j++){

                cout << "Brewing " << j << " cup of " << Tea_type[i] << endl;
            }
        }
        
        
    

    return 0;
}