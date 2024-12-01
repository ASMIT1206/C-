#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int a = 0, b = 1, sum = 0;
    cout << a << " ";
    cout << b << " ";
    for (int i = 2; i < n; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
        cout << sum << " ";
    }
}