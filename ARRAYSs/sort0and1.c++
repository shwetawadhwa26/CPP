#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[100];
    int sum0 = 0;
    int sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
        {
            sum0 = sum0 + 1;
        }
        else if (arr[i] == 1)
        {
            sum1 = sum1 + 1;
        }
    }
    for (int j = 0; j < sum0; j++)
    {
        cout << 0 << " ";
    }
    for (int k = 0; k < sum1; k++)
    {
        cout << 1 << " ";
    }
    cout << endl;

    return 0;
}
