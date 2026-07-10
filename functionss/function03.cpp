#include <iostream>

using namespace std;

void chaiWala(int cups){ 
    cups = cups + 5;
    cout << "chai cups: " << cups << endl;
}

int main(){
    int chaicups = 2;
    chaiWala(chaicups);
    cout << "Total cups are: " << chaicups << endl;     
    
    return 0;

}