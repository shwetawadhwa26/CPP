#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "array size = ";
    cin >> n;

    int target;
    cout << "enter digit to find: ";
    cin >> target;

    int arr[100];
    bool flag = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        cout << "target found" << endl;
    }
    else
    {
        cout << "target not found" << endl;
    }

    return 0;
}
