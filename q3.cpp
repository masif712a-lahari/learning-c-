#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a positive number : ";
    cin >> n;
    long long int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    cout << "teh factorial of " << n << "! : " << factorial;

    return 0;
}
