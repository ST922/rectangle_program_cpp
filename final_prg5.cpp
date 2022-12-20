#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Defining variables
    unsigned int height;
    unsigned int width;
    int num = 1;

    // Defining inputs
    cout << "Enter the height: ";
    cin >> height;
    cout << "Enter the width: ";
    cin >> width;
    cout << endl;

    // Using foor loop for output
    for (int i = 1; i <= height; i++)
    {
        for (int j = i; j <= i + width - 1; j++)
        {
            cout << fixed << setw(4) << num;
            num++;
        }
        cout << endl;
    }

    return 0;
}