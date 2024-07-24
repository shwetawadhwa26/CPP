#include <iostream>
#include <algorithm>
using namespace std;

int findMiddleElement(int arr[], int n)
{
    sort(arr, arr + n); // Sorting the array
    return arr[n / 2];  // Return the middle element
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int middleElement = findMiddleElement(arr, n);
    cout << "Middle Element: " << middleElement << endl;

    return 0;
}
