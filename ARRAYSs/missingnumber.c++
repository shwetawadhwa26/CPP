#include <iostream>
using namespace std;
int missignumber(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
        if (ans != arr[i])
        {
            return ans;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "enter the number of elements : ";
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int result = missignumber(arr, n);
    cout << " missing number = " << result;

    return 0;
}