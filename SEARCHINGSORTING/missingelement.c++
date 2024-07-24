// find missing element in an sorted array
#include <iostream>
using namespace std;

int missing(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    int ans = -1;
    while (start <= end)
    {
        int diff = arr[mid] - mid;
        if (diff == 1)
        {
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans + 1;
}
int main()
{

    int arr[100];
    int n;
    cout << "size of array : ";
    cin >> n;
    cout << "enter your elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << missing(arr, n);

    return 0;
}