#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int &k = n;
    int &c = n;
    cout << "n: " << n << endl;
    cout << "k: " << k << endl;
    cout << "c: " << c << endl;

    // int &t = 6;
    // refrence variable can be refrenced for a variable only not for constant
    // cout << "t : " << t << endl;
    return 0;
}