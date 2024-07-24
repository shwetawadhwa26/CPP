#include <iostream>
using namespace std;
int slowexponentiation(int a, int b)
{
    int ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans *= a;
    }
    return ans;
}
int main()
{
    cout << slowexponentiation(5, 4) << endl;

    return 0;
}