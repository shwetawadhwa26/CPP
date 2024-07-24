#include <iostream>
using namespace std;
int main()
{
    int row, col = 3;
    int sum = 0;
    int arr[3][3];
    cout << "enter elements : ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "matrix : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        sum = sum + arr[i][i];
    }
    cout << " diagonal sum = " << sum;
    return 0;
}