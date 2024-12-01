#include <iostream>
using namespace std;
int maze(int rows, int columns)
{
    if (rows == 1 || columns == 1)
        return 1;
    int rightways = maze(rows, columns - 1);
    int downways = maze(rows - 1, columns);
        return rightways + downways;
}
int main()
{
    int rows, columns;
    cout << "Enter rows and columns: ";
    cin >> rows >> columns;
    cout << "No. of steps required is: " << maze(rows, columns);
}