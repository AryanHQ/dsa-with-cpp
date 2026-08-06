#include <iostream>
#include <string>

using namespace std;

int main()
{
    double account_balance;
    double withdrawal_amount;

    cout << "Enter account balance : ";
    cin >> account_balance;
    cout << "Enter withdrawal amount : ";
    cin >> withdrawal_amount;

    
        if (withdrawal_amount > 0)
        {
            if (account_balance >= withdrawal_amount)
            {
                double remaining_balance = account_balance - withdrawal_amount;
                
                cout << "Withdrawl Successful" << endl;
                cout << "Remaining Balance : " << remaining_balance << endl;
            }
            else
            {
                cout << "Insufficient Balance " << endl;
            }
        }
        else{
        cout << "Invalid withdrawal amount" << endl;

    }

    return 0;
}