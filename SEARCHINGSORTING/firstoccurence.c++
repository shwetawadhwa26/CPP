// find occurence of an element in a sorted array
// input array - 10,20,30,30,30,30,40,50
// input target - 30
// output - 2 ( first occurence of 30 is at index 2 )

#include <iostream>
using namespace std;
int binarysearch(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
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
    return ans;
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
