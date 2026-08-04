#include <iostream>
#include <vector>

using namespace std;

class Chai{
    public:
   // data members (attributes)
   string teaName; //name of tea  
   int servings; // num of servings 
   vector<string> ingredients; //list of ingredients of tea

   //member function

   void displayChaiDetails(){
    cout << "Tea Name : " << teaName << endl;
    cout << "Servings: " << servings << endl;
    cout << "Ingredients : ";
    for(string ingredient : ingredients) {
        cout << ingredient << "";


    }
    cout << endl;
   }
};

int main (){
    Chai chaiOne;

    chaiOne.teaName = "Lemon tea";
    chaiOne.servings = 2;
    chaiOne.ingredients = {"Water " ," Lemon " " Tea"};
    
    chaiOne.displayChaiDetails();
    cout << endl;
    
    Chai chaiTwo;
    
    chaiTwo.teaName = "Masala tea";
    chaiTwo.servings = 4;
    chaiTwo.ingredients = {"Water " ," milk " " Tea masala"};

    chaiTwo.displayChaiDetails();
    

    return 0;
}
