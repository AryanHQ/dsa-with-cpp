#include <iostream>
#include <string>

using namespace std;

int main()
{
    double purchase;
    string premimum;

    
    cout << "Total purchase amoumt : ";
    cin >> purchase;
    cout << "Premium member (Y or N) : ";
    cin >> premimum;
    if (purchase >= 1000 )
    {
        
        if (premimum == "Y")
        {
            double discount_amount = purchase * 0.2;
            double final_amount = purchase - discount_amount;
            
            cout << "20% discount" << endl;
            
            cout << "Discount Amount : " << discount_amount << endl;
            
            
            cout << "Final amount : " << final_amount << endl;
            
        }else{
            double discount_amount = purchase * 0.1;
            double final_amount = purchase - discount_amount;
            cout << "10% discoutn" << endl;
            cout << "Discount Amount : " << discount_amount << endl;
            
            
            cout << "Final amount : " << final_amount << endl;
        }
        
        
    }else if(purchase < 1000){
        cout << "No discount" << endl;
            cout << "Final amount : " << purchase << endl;
        }
        
    
    
    

    

    return 0;
}