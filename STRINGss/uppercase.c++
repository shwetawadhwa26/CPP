// input - My name is Love Babbar
// ouput - MY NAME IS LOVE BABBAR

// lowercase to uppercase formula = l.c + 'a' + 'A'

#include <iostream>
#include <string.h>
using namespace std;

void uppercaseconversion(char ch[], int n)
{
    int index = 0;
    while (ch[index] != '\0')
    {
        char character = ch[index];
        if (character >= 'a' && character <= 'z')
        {
            ch[index] = character - 'a' + 'A';
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
    uppercaseconversion(ch, len);
    cout << endl
         << "after : " << ch << endl;

    return 0;
}