#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int c = 0;
    int even = 0;
    int odd = 0;
    int digit = 0;
    while (n>0)
    {
        digit = n % 10;
        n = n/10;
        // c++;

        if (digit % 2 == 0)
        {
            even++;
        }else{
            odd++;
        }
        
        
        
    }
    cout << "Even digits : " << even << "\n";
    cout << "Odd digits : " << odd << "\n";
    

    return 0;
}