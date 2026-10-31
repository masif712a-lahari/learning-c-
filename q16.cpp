#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a positive integer : ";
    int n;
    cin >> n;
    int count = 0, even = 0, odd = 0;
    while (n != 0)
    {
        cout << n % 10;
        n /= 10;
    }

    return 0;
}
