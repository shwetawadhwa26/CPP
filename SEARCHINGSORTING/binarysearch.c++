// for binary serach the array must be sorted(ascending/descending order)
// mid = start+end/2

#include <iostream>
using namespace std;
int binarysearch(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
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
    int target;
    cout << " enter your target : ";
    cin >> target;
    int result = binarysearch(arr, n, target);

    if (result == -1)
    {
        cout << "element not present in the array";
    }
    else
    {
        cout << target << " element found at index : " << result << endl;
    }
    return 0;
}