#include <iostream>
using namespace std;
int power(int a, int b)
{
    if (b == 1)
        return a;
    if (b % 2 == 0)
        return power(a, b / 2) * power(a, b / 2);
    if (b % 2 != 0)
        return power(a, b / 2) * power(a, b / 2) * a;
}
int main()
{
    int a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;
    cout << power(a, b);
}