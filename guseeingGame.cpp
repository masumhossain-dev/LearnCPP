#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
while(1)
{
    int guessingNumber, randomNumber;

    cout << "Enter your guessing number: " << endl;
    cin >> guessingNumber;

    randomNumber = rand() % 5 + 1;

    if (guessingNumber == randomNumber)
    {
        cout << "You got it!" << endl;
    }
    else
    {
        cout << "You lost!" << endl;
        cout << "Random number was: " << randomNumber << endl;
    }
}




    return 0;
}