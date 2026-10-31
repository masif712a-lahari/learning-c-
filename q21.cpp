#include <iostream>
using namespace std;
int main()
{
    int c = 1, total_price = 0, quantity;
    for (int i = 1; i != 0; i = c)
    {
        cout << "1. Book(Rs. 500)" << endl;
        cout << "2. T-Shirt(Rs. 700)" << endl;
        cout << "3. Shoes(Rs. 1000)" << endl;
        cout << "0. Exit" << endl;
        cout << "Choice : ";
        cin >> c;
        if (c == 1)
        {
            cout << "Enter Quantity of Book : ";
            cin >> quantity;
            total_price += 500 * quantity;
        }
        else if (c == 2)
        {
            cout << "Enter Quantity of T-Shirt : ";
            cin >> quantity;
            total_price += 700 * quantity;
        }
        else if (c == 3)
        {
            cout << "Enter Quantity of Shoes : ";
            cin >> quantity;
            total_price += 1000 * quantity;
        }
        else if (c < 0 || c > 3)
        {
            cout << "Invalid choice! \n";
            cout << "please try within range of (0-3)\n";
            continue;
        }
        else if (c == 0)
        {
            break;
        }
        cout << "\nTotal price: " << total_price << "PKR" << endl;
    }
    return 0;
}
