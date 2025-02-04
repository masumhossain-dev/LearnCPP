#include<iostream>
#include <stdlib.h>
using namespace std;

int sum(int a, int b)
{
    return a+b;
}

int main()
{
cout << sum(10, 6) << endl;



    for (int i = 1; i <= 10; i++)
    {
        cout << "Random Number " << i << " is: " << rand() << endl;
    }
    return 0;
}