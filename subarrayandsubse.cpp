#include<iostream>

#include<string>

#include<conio.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter a number " <<endl;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    } 

    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        curr = 0;
        for (int j = 1; j < n; j++)
        {
            curr+=arr[j];
            cout << curr << endl;
        }
        
    }
        
    return 0;
}
