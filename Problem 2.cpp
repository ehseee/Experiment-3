// Problem 2 : Experiment 3 //

#include <iostream>
#include <conio.h>

using namespace std;

const int p = 3;
const int d = 7;

int main()
{
    int temperature[p][d];

    cout << "Enter all temperature for a week of Province A, Province B, and then Province C \n";
    for (int i = 0; i < p; ++i)
    {
        for(int j = 0; j < d; ++j)
        {
            cout << "Province " << i + 1 << ", Day " << j + 1 << " : ";
            cin >> temperature[i][j];
        }
    }

    cout << "\nDisplaying Values:\n";

    for (int i = 0; i < p; ++i)
    {
        for(int j = 0; j < d; ++j)
        {
            cout << "Province " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;
        }
    }

    return 0;
}
