#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a positive integer : ";
    int n;
    cin >> n;
    int sum = 0, product = 1;
    while (n != 0)
    {
        sum += n % 10;
        product *= n % 10;
        n /= 10;
    }
    cout << "the sum : " << sum;
    cout << endl
         << "the product is: " << product;

    return 0;
}
