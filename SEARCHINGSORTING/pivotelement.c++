#include <iostream>
using namespace std;
int pivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    while (s <= e)
    {
        if (arr[mid] < arr[mid - 1])
        {
            return mid - 1;
        }
        else if (arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[s] > arr[mid])
        {
            e = mid - 1;
            return e;
        }
        else
        {
            s = mid + 1;
            return s;
        }
    }
}
int main()
{

    return 0;
}