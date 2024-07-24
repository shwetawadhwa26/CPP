#include <iostream>
using namespace std;

int nearlysorted(int arr[], int n, int target)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }

        if (mid - 1 >= 0 && arr[mid - 1] == target)
        {
            return mid - 1;
        }

        if (mid + 1 < n && arr[mid + 1] == target)
        {
            return mid + 1;
        }

        if (target > arr[mid])
        {
            s = mid + 2;
        }
        else
        {
            e = mid - 2;
        }
    }

    return -1;
}

int main()
{
    int arr[100];
    int n;

    cout << "Size of array: ";
    cin >> n;

    cout << "Enter your elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Enter your target: ";
    cin >> target;

    int found = nearlysorted(arr, n, target);

    if (found == -1)
    {
        cout << "Element not present in the array" << endl;
    }
    else
    {
        cout << target << " element found at index: " << found << endl;
    }

    return 0;
}
