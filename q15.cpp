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
        int i = n % 10;
        if (i % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        count++;
        n /= 10;
    }
    cout << "COUNT : " << count << endl;
    cout << "even : " << even << endl;
    cout << "ood : " << odd << endl;
    return 0;
}
