#include <iostream>
using namespace std;
int main()
{
    int n;
    while (true)
    {
        cout << R"(1. Check Even/Odd
2. Check Positive/Negative
3. Check Divisible by 5
0. Exit)";
        cout << "\nchoice : ";
        cin >> n;
        switch (n)
        {
        case 1:
        {
            cout << "Enter anu positiv enumber : ";
            cin >> n;
            if (n % 2 == 0)
            {
                cout << n << " is even\n";
            }
            else
            {
                cout << n << " is Odd\n";
            }
            break;
        }
        case 2:
        {
            cout << "Enter any positive number : ";
            cin >> n;
            if (n > 0)
            {
                cout << n << " is positive\n";
            }
            else
            {
                cout << n << "NUM is negative\n";
            }
            break;
        }
        case 3:
        {
            cout << "Enter any positive number : ";
            cin >> n;
            if (n % 5 == 0)
            {
                cout << n << " is divisible of 5\n";
            }
            else
            {
                cout << n << " is not divisible of 5\n";
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
