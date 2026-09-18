#include <iostream>
using namespace std;

int main() {
 int n;
 cin >> n;
 int lastdigit , sum = 0;
 while (n>0)
 {
   lastdigit = n%10;
   sum = sum + lastdigit;
   n = n/10;
   
}
    cout << sum << "\n";
  


    return 0;
}