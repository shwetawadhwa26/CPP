//    *
//   * *
//  * * *
// * * * *
//* * * * *

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of rows";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            for (int k = 0; k <= i; k++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
        88888
    }

    return 0;
}