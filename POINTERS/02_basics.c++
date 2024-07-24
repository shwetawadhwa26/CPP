#include <iostream>
using namespace std;
void solve(int *arr, int size)
{
    cout << "size of array inside func: " << sizeof(arr) << endl;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    cout << "size of array : " << sizeof(arr) << endl;
    solve(arr, 4);

    // int arr[5] = {1, 2, 3, 4, 5};

    // // pointer to array
    // int *ptr1 = arr;

    // // pointer to an array
    // int(*ptr)[5] = &arr;
    // cout << (*ptr)[0];

    // char ch[10] = "Babbar";
    // char *cptr = &ch;

    return 0;
}