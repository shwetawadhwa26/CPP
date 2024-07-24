// input -2,-3,8,0,9,-11,2,33
// output -2,-3,-11,8,0,9,2,33

#include <iostream>
using namespace std;

void separate(int arr[], int n)
{
    int neg = 0;

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] < 0)
        {
            if (i != neg)
            {
                int temp = arr[i];
                arr[i] = arr[neg];
                arr[neg] = temp;
            }

            // method 2
            // if (arr[i] < 0)
            // {
            //     swap(arr[i], arr[neg]);
            //     neg++;
            // }
            // neg++;
        }
    }
}

int main()
{
    int n;
    cout << "enter number of elements: ";
    cin >> n;
    int arr[100];

    cout << "separated numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    separate(arr, n);
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
