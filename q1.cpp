#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Enter any positive integer N :";
    cin >> N;
    int sum = 0;
    cout << "Odd numbers are : ";
    for (int i = 1; i <= N; i += 2)
    {
        cout << " " << i;
        sum = sum + i;
    }
    cout << "\nsum of all odd integer up to " << N << " is : " << sum;

    return 0;
}
