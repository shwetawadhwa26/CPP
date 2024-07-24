#include <iostream>
using namespace std;

bool searcharray(int arr[], int size, int target, int index)
{
    if (index >= size)
    {
        return false;
    }
    if (arr[index] == target)
    {
        return true;
    }
    bool ans = searcharray(arr, size, target, index + 1);
}
int main()
{

    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int index = 0;
    int target = 40;
    cout << searcharray(arr, size, target, index) << endl;
    searcharray(arr, size, target, index);

    return 0;
}