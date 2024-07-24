// print array with recursion

// #include <iostream>
// using namespace std;

// void printarray(int arr[], int size, int index)
// { // base case
//     if (index >= size)
//     {
//         return;
//     }
//     // processing
//     cout << arr[index] << " ";

//     // recursive call
//     printarray(arr, size, index + 1);
// }
// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50};
//     int size = 5;
//     int index = 0;
//     printarray(arr, size, index);

//     return 0;
// }

// printing reverse of an array with recursion

#include <iostream>
using namespace std;

void printarray(int arr[], int size, int index)
{ // base case
    if (index >= size)
    {
        return;
    }
    // recursive call
    printarray(arr, size, index + 1);

    // processing
    cout << arr[index] << " ";
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int index = 0;
    printarray(arr, size, index);

    return 0;
}