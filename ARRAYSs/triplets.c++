#include <iostream>
using namespace std;
int main()
{
    int arr[3] = {1, 2, 4};
    int n = 3;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cout << arr[i] << "," << arr[j] << "," << arr[k] << endl;
            }
            cout << endl;
        }
    }
    return 0;
}