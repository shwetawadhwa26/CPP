#include <iostream>
using namespace std;
int climbstairs(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 2;
    }
    int ans = climbstairs(n - 1) + climbstairs(n - 2);
    return ans;
}
int main()
{
    cout << climbstairs(3) << endl;

    return 0;
}