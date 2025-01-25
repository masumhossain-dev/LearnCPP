#include<iostream>
using namespace std;

int main()
{
int num;
    cout << "Enter your multiplied number: " << endl;
    cin >> num;

    cout << "Your required multiplication table is: " << endl;
    for (int i = 1; i<=10; i++)
    {
        cout << num << " X " << i << " = " << num * i << endl;
    }

    return 0;
}