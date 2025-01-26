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
        cin >> students[i];
        sum = sum + students[i];
    }

    cout << "Total students marks: " << sum << endl;

    cout << "Average of students marks: " << (float)sum / n << endl;


    return 0;
}