#include <iostream>
#include <vector>
using namespace std;

int findmini(int arr[], int size, int index, int mini)
{
    if (index >= size)
    {
        return mini;
    }
    mini = min(mini, arr[index]);

    return findmini(arr, size, index + 1, mini);
}

void solve(int arr[], int size, int index, vector<int> &ans)
{ // base case
    if (index >= size)
    {
        return;
    }
    if (arr[index] % 2 == 0)
    {
        ans.push_back(arr[index]);
    }
    // recursive call
    solve(arr, size, index + 1, ans);
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 99, 77, 55, 33};
    int size = 9;
    int index = 0;
    vector<int> ans;
    solve(arr, size, index, ans);

    for (int num : ans)
    {
        cout << num << " ";
    }

    return 0;
}