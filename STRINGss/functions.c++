#include <iostream>
using namespace std;
int main()
{

    // length of string

    string name;
    cin >> name;

    string temp = "";
    cout << "length of string : " << name.length() << endl;

    // check if string is empty or not
    cout << "string is empty or not " << temp.empty() << endl;
    cout << "string is empty or not " << name.empty() << endl;

    // character position
    cout << "character at position :" << name.at(0) << endl;

    // character at front positon
    cout << "front character : " << name.front() << endl;

    // character at back positon
    cout << "front character : " << name.back() << endl;

    return 0;
}