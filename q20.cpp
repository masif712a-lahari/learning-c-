#include <iostream>
using namespace std;
int main()
{
    double balance = 10'000;
    while (true)
    {
        cout << endl
             << R"(1. Check Balance
2. Deposit
3. Withdraw
0. Exit)" << endl;

        int n;
        double deposite, withdraw;
        cout << "Choice : ";
        cin >> n;
        switch (n)
        {
        case 1:
        {
            cout << "balance : " << balance;
            break;
        }
        case 2:
        {
            cout << "enter deposite amount : ";
            cin >> deposite;
            if (deposite < 0)
            {
                cout << "please enter valid deposite amount";
            }
            else
            {
                cout << "your deposite amount " << deposite << " is sucessfully! ";
                balance += deposite;
            }
            break;
        }
        case 3:
        {
            cout << "enter withdrawal amount : ";
            cin >> withdraw;
            if (withdraw < 0 || withdraw > balance)
            {

                cout << "invalid amount!\n please enter valid amount ";
            }
            else
            {
                balance -= withdraw;
                cout << "your withdwal amount " << withdraw << " is sucessfully withdraw ";
            }
            break;
        }
        case 0:
        {
            return 0;
        }
        }
    }
    return 0;
}
