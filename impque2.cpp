#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter a number " <<endl;
    cin >> n;
    int arr[n+1];
    arr[n] = -1;

    for(int i; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n ==1)
    {
        cout << "1" <<endl;
    }
    int ans = 0;
    int mx = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mx && arr[i] > arr[i+1])
        {
            ans++;
        }
        mx = max(mx, arr[i]);    
    }
    cout << ans <<endl;
    
    return 0;
}
