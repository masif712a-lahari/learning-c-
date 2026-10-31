#include <iostream>
using namespace std;
int main()
{
    int n = 0, sum = 0;

    int i = 1;
    while (n >= 0)
    {
        if (n < 30)
            sum += n;
        cout << "Enter number " << i << " : ";
        cin >> n;
        i++;
    }
    cout << "SUM : " << sum;

    return 0;
}
