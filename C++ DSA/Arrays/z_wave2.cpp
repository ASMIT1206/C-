#include <iostream>
using namespace std;
int main()
{
    int r1, c1;
    cout << "Enter rows and column of matrix: ";
    cin >> r1 >> c1;
    int arr[r1][c1];

    cout << "Start entering values of matrix" << endl;

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < r1; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < c1; j++)
            {
                cout << arr[i][j] << " ";
            }
        }

        else
        {
            for (int j =0; j<c1; j++)
            {
                cout << arr[i][c1-j-1] << " ";
            }
        }
        cout << endl;
    }
}