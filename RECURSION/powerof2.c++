// 2^n
// pow(n) = 2^n
// pow(n) = 2*2^n-1
// pow(n) = 2*pow(n-1)

#include <iostream>
using namespace std;

int power(int n)
{
    // base case

    if (n == 0)
    {
        return 1;
    }
    int ans = 2 * power(n - 1);
    return ans;
}
int main()
{

    power(10);

    return 0;
}