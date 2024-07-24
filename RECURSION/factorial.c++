#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 1)
        return 1;
    if (n == 0)
        return 1;

    // processing

    // recursive relation
    int recursionkans = factorial(n - 1);
    // processing
    int ans = n * recursionkans;
    return ans;
}
int main()
{
    cout << factorial(5) << endl;

    return 0;
}