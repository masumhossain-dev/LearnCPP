#include<iostream>
using namespace std;

int main()
{
    //array initialization and display using for loop.
int age[10] = {11, 10, 32, 25, 54, 23, 66, 76, 18, 23};

    for(int i = 0; i<10; i++)
    {
        cout << age[i] << endl;
    }


// get input in array using for loop.
    string name[10];

    for (int i = 0; i<10; i++)
    {
        cin >> name[i];
    }

    for (int i = 0; i<10; i++)
    {
        cout << name[i] << endl;
    }

    return 0;
}