#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void print(vector<int> &v)
{
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

bool mycomp(int &a, int &b)
{
    return a > b; // dec order sorting
    // return a < b // inc order sorting
}
int main()
{
    vector<int> v = {44, 33, 55, 66, 77};
    // inc order sorting
    // sort(v.begin(), v.end());

    // dec order sorting
    sort(v.begin(), v.end(), mycomp);
    print(v);
    return 0;
}