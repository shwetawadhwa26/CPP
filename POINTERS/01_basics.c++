#include <iostream>
using namespace std;
int main()
{
    // int a = 5;
    // cout << a << endl;
    // cout << "address of a = " << &a << endl;

    // // creation of pointer
    // int *ptr = &a;

    // // acessing value stored at address stored in ptr
    // cout << "accessing : " << *ptr << endl;

    // // prints address of 5
    // cout << ptr << endl;

    // // prints address of *ptr
    // cout << &ptr << endl;

    // cout << "*******************************************" << endl;

    // int b = 1;
    // int *iptr = &b;
    // cout << iptr << endl;

    // char ch = 'k';
    // char *cptr = &ch;
    // cout << cptr << endl;

    // long lachi = 10;
    // long *lptr = &lachi;
    // cout << lptr << endl;

    cout << "------------------------------------------" << endl;

    int z = 100;
    int *ptr = &z;

    cout << "z = " << z << endl;
    cout << "&z = " << &z << endl;
    // cout<<"*z = "<<*z<<endl;
    cout << "ptr = " << ptr << endl;
    cout << "*ptr = " << *ptr << endl;
    cout << "&ptr = " << &ptr << endl;

    cout << "(*ptr)++" << (*ptr)++ << endl;
    cout << "++(*ptr)" << ++(*ptr) << endl;

    //*==================array with pointers =========================*

    int arr[] = {1,
                 2,
                 3,
                 4,
                 5};
    cout << *(arr + 1) << endl;
    cout << *(arr + 2) << endl;
    cout << *(arr + 3) << endl;
    cout << *(arr + 4) << endl;

    // error
    //  arr = arr + 1;
    //  cout << arr << endl;

    char ch = 'a';
    char *cptr = &ch;
    cout << cptr;

    return 0;
}