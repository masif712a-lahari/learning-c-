#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 50; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << "fizzBizz";
        }
        else if (i % 3 == 0)
        {
            cout << "fizz";
        }
        else if (i % 5 == 0)
        {
            cout << "bizz";
        }
        else
        {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}
