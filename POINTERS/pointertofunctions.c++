// #include <iostream>
// using namespace std;
// void solve(int *arr, int size)
// {
//     cout << "inside solve => arr:" << arr << endl;
//     cout << "inside solve =>  &arr:" << &arr << endl;
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     solve(arr, 5);

//     cout << "inside main = " << arr << endl;
//     cout << "inside main = " << &arr << endl;

//     return 0;
// }

// pratcise

#include <iostream>
using namespace std;
void solve(int *arr, int size)
{
    *arr = *arr + 1;
}
int main()
{
    int arr[] = {10, 20, 30};
    solve(arr, 3);

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}