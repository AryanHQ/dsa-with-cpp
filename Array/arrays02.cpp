#include <iostream>
using namespace std;

int total_chai_served(int chai[],int size){
    int total = 0;
    for(int i = 0 ; i < size ; i++){
        total += chai[i];
    }
    return total;
}

int main(){
    int chai_served[7] = {23,33,56,68,45,34,89};

    int total = total_chai_served(chai_served , 7);

    cout << total << endl;





    return 0;
}