#include<iostream>

using namespace std;

int main()
{   int columns, rows;

    cout << "Enter columns " <<endl;
    cin >> columns;

    cout << "Enter rows " <<endl;
    cin >> rows;

    for(int i = 1; i <= columns; i++)
    {
        for(int j = 1; j <= rows; j++)
        {
            cout << "*";
        }
        cout <<endl;
    }
    return 0;
}