#include <iostream>
#include <Climits>
using namespace std;
int main()
{
    int n = 1, low = INT_MAX, high = INT_MIN;
    while (n != 0)
    {
        if (n > high)
        {
            high = n;
        }
        if (low > n)
        {
            low = n;
        }
        cout << "Enter a number : ";
        cin >> n;
    }
    cout << "the hghest : " << high << endl;
    cout << "the lowerst : " << low;
    return 0;
}
