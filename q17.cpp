#include <iostream>
using namespace std;
int main()
{
    // plaindrome
    cout << "Enter a positive integer : ";
    int n;
    cin >> n;
    int org = n;
    int reverse = 0;
    while (n != 0)
    {
        reverse = 10 * reverse + (n % 10);

        n /= 10;
    }
    cout << reverse << endl;
    if (org == reverse)
    {
        cout << "plaindrome";
    }
    else if (org != reverse)
    {
        cout << "NOT A PLAINDROME";
    }

    return 0;
}
