#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int zero = 0;
    int digit = 0;
    while (n>0)
    {
        digit = n % 10;
        n = n/10;

        if (digit  == 0)
        {
            zero++;
        }
        
        
        
    }
    cout  << zero << "\n";
   
    

    return 0;
}