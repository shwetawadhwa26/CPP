// Fibonacci series --> 0,1,1,2,3,5,8,13,21,34...

// f(n)=f(n-1)+f(n-2)

#include <iostream>
using namespace std;

int fib(int n)
{
    // base case
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    int ans = fib(n - 1) + fib(n - 2);
    return ans;
}
int main()
{
    cout << fib(10) << endl;
    return 0;
}