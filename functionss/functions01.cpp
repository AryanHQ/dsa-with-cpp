// returnType functionName(parameter){
//    function body

//}

#include <iostream>
using namespace std;

int checkTemprature(int temprature)
{
    return temprature;
}

// declaration of function
void serveChai(int cups);

void makeChai()
{
    cout << "your chai" << endl;
}

void serveChai(string teaType = "super chai"){
    cout << "Serving " << teaType << endl;

}

int main()
{
    int temp = checkTemprature(80);
    cout << temp << endl;
    makeChai(); // calling a function

    

    serveChai(4);
    serveChai("masala chai");
    serveChai(); // default parameter

    return 0;
}

// defination of function
void serveChai(int cups)
{
    cout << "serving " << cups << " chai" << endl;
}
