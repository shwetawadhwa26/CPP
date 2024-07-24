#include <iostream>
#include <string.h>
using namespace std;

void reverse(char ch[], int n)
{
    int i = 0;
    int j = n - 1;

    while (i <= j)
    {
        swap(ch[i], ch[j]);
        i++;
        j--;
    }
}

int main()
{

    char ch[100];
    cin.getline(ch, 100);

    cout << "before : " << ch << endl;

    int len = strlen(ch);

    reverse(ch, len);
    cout << "after : " << ch << endl;

    return 0;
}

// direct function for reversing a string
//  reverse(str.begin(),str.end());

// #include <iostream>
// #include <string.h>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     char ch[100];
//     cin.getline(ch, 100);
//     cout << "before : " << ch << endl;
//     int len = strlen(ch);
//     reverse(ch, ch + len);
//     cout << "after : " << ch;

//     return 0;
// }