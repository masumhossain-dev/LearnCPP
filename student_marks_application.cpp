#include <iostream>
using namespace std;

int main()
{
int n, sum = 0;
    cout << "Enter the number of students: ";
    cin >> n;

    int students[n];

    cout << "Enter the students marks: " << endl;
    for (int i = 0; i< n; i++)
    {
        cout << "Marks for student " << i + 1 << endl;
        cin >> students[i];
        sum = sum + students[i];
    }

    cout << "Total students marks: " << sum << endl;

    cout << "Average of students marks: " << (float)sum / n << endl;


    //get maximum and minimum marks
    int max = students[0];
    int min = students[0];

    for (int i = 1; i < n; i++)
    {
        if (students[i] > max)
        {
            max = students[i];
        }
        if (students[i] < min)
        {
            min = students[i];
        }
    }
    cout << "Max mark is: " << max << endl;
    cout << "Min mark is: " << min << endl;


    return 0;
}