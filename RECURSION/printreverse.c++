// reverse counting print - n to 1

#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 1)
    {
        cout << 1 << " ";
        return;
    }

    cout << n << " ";
    print(n - 1);
}

int main()
{
    print(5);
    return 0;
}