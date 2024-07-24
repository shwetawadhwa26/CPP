#include <iostream>
#include <stack>
using namespace std;
bool isstack(string s)
{
    stack<char> stk;
    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
            stk.push(c);
        else if (stk.empty())
            return false;
        else if (stk.top() == '(' && c == ')')
            stk.pop();
        else if (stk.top() == '[' && c == ']')
            stk.pop();
        else if (stk.top() == '{' && c == '}')
            stk.pop();
        else
        {
            return false;
        }
    }
}
int main()
{
    string str;
    cin >> str;
    if (isstack(str))
        cout << "yes";
    else
        cout << "no";
    return 0;
}