#include<iostream>
#include<math.h>
#include<string>
#include<conio.h>

using namespace std;

// int binarySearch(int array[], int n, int key)
// {
//     int s = 0;
//     int e = n;
//     while (s<= e)
//     {
//         int mid = (s+e)/2;

//         if (array[mid]==key)
//         {
//             return mid;
//         }
//         else if (array[mid]>key)
//         {
//             e=mid-1;
//         }
//         else
//         {
//             s=mid+1;
//         }
               
        
//     }
//      return -1;
// }

int main()
{
    int n;
     cin >> n;

     int array[n];

     for(int i = 0; i < n; i++)
     {
         cin >> array[i];
     }

     for (int i = 0; i < n-1; i++)      
     {
         for (int j = i+1; j < n; j++)
         {
             if (array[j]<array[i])
             {
                 int temp = array[j];
                 array[j] = array[i];
                 array[i] = temp;  
             }
             
         }
         
     }

     for (int i = 0; i < n; i++)
     {
         cout << array[i] << " ";
     }
     cout  <<endl;
     
     
    return 0;
}