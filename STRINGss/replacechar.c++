// input - my@name@is@shweta
// output - my name is shweta
// replace @ --> " "

#include <iostream>
#include <string.h>
using namespace std;
void replace(char ch[], int n)
{
    int index = 0;
    while (ch[index] != '\0')
    {
        if (ch[index] == '@')
        {
            ch[index] = ' ';
        }
        index++;
    }
}
int main()
{
    char ch[100];
    cin.getline(ch, 100);
    cout << "before : " << ch << endl;
    int len = strlen(ch);
    replace(ch, len);
    cout << endl
         << "after : " << ch << endl;

    return 0;
}