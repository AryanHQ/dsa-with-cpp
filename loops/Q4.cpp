#include <iostream>
using namespace std;

int main() {
 int n;
 cin >> n;
 int lastdigit , c = 0;
 while (n>0)
 {
   lastdigit = n%10;
   n = n/10;
   c++;
}
cout << c << "\n";
  


    return 0;
}