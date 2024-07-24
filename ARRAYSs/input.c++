// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[100];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << endl;
//         }
//     return 0;
// }

// input 10 size array take input double up each value

#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "*2 = " << arr[i] * 2 << endl;
    }
    return 0;
}
