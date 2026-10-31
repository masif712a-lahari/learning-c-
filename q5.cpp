#include <iostream>
using namespace std;
int main()
{
    // fabonachi
    int n1 = 0, n2 = 1, sum = 0;
    for (int i = 0; i <= 10; i++)
    {

        if (i == 0 || i == 1)
            cout << i << " ";
        else
        {
            sum = n1 + n2;
            n1 = n2;
            n2 = sum;
            cout << sum << " ";
        }
    }

    return 0;
}
