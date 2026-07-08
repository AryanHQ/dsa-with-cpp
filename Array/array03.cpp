#include <iostream>
using namespace std;

int* prepare_chai_order(int cups){
    int* orders = new int[cups];
    for (int i = 0; i < cups; i++)
    {
        orders [i] = (i + 1) * 10000000;
    }
    return orders;
}

int main(){
    int cups;
    cout << "Day details you want to know: ";
    cin >> cups;
    int* chai_order = prepare_chai_order(cups);

    for (int i = 0; i < cups ; i++)
    {
        cout << "Cups: " << i+1 << " has " << chai_order[i] << " ml \n";

    }
    delete[] chai_order;
    
    
    return 0;
}