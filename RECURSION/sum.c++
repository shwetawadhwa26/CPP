// i/p =n
// numbers from n-->1
// sum print

// solve(n)=n+(n-1)+(n-2)+...+3+2+1
// solve(n)=n+solve(n-1) -->recursion

#include <iostream>
using namespace std;

int sum(int n)
{

    if (n == 1)
        return 1;

    int ans = n + sum(n - 1);
    return ans;
}
int main()
{
    cout << sum(5);

    return 0;
}
