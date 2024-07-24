#include <iostream>
using namespace std;
void arraycount(int arr[], int size)
{
    int sumzero = 0;
    int sumone = 0;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (arr[i] == 0)
        {
            sumzero = sumzero + 1;
        }
        else
        {
            sumone = sumone + 1;
        }
    }

    cout << "totalnumber of zero's = " << sumzero << endl;
    cout << "total number of ones = " << sumone << endl;
}
int main()
{
    int n;
    cout << "array size : ";
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    arraycount(arr, n);

    return 0;
}