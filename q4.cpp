#include <iostream>
using namespace std;
int main()
{
    int n, zero = 0, positive = 0, negative = 0;
    cout << "Enter 10 number : ";
    for (int i = 1; i <= 10; i++)
    {
        cin >> n;
        if (n == 0)
        {
            zero++;
        }
        else if (n > 0)
        {
            positive++;
        }
        else if (n < 0)
        {
            negative++;
        }
    }
    cout << "zero : " << zero << endl;
    cout << "positive : " << positive << endl;
    cout << "negative : " << negative << endl;

    return 0;
}
