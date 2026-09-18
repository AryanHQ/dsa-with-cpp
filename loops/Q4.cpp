#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int copy = n;
    int lastdigit, reve = 0;
    while (n > 0)
    {

        lastdigit = n % 10;
        reve = reve * 10 + lastdigit;
        n = n / 10;
        
    }
    cout << ((reve == copy) ? "Palindrome\n" : "Not Palindrome\n");

    return 0;
}