#include <iostream>

using namespace std;

int main() {
    int a ,b ;
    char op;
    cin >> a >> op >> b;


    switch (op)
    {
    case '+':
        cout << a + b << '\n';
        break;
    case '-':
        cout << a - b << '\n';
        break;
    case '*':
        cout << a * b << '\n';
        break;
    case '/':
        cout << a / b << '\n';
        break;
    case '%':
        cout << a % b << '\n';
        break;
    
    default:
    cout << "Invalid Day" << '\n';
        break;
    }
    return 0;
}