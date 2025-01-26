#include<iostream>
using namespace std;

int main()
{
int x = 5;
int *ptr;
    ptr = &x;

    //for display variable data
    cout << x << endl;
    // for display x variable address
    cout <<  &x << endl;
    //for display address in pointer
    cout << ptr << endl;
    //for value in pointer
    cout << *ptr << endl;

    return 0;
}