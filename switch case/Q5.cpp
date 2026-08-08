#include <iostream>

using namespace std;

int main() {
    int n , a , b;
    cout << "1. Addition" << '\n' << "2.  Subtraction" << '\n' << "3. Multiplication" << '\n' << "4. Division" << '\n';
    cin >> n;

    switch (n)
    
    {
    case 1:
        cin >> a >> b ;
        cout << a + b << '\n';
        break;
    case 2:
        cin >> a >> b ;
        cout << a - b << '\n';
        
        break;
    case 3:
        cin >> a >> b ;
        cout << a * b << '\n';
        
        break;
    case 4:
        
        cin >> a >> b ;
        cout << a / b << '\n';
        break;
    
    default:
    cout << " Invalid Choice" << '\n';
        break;
    }




    return 0;
}