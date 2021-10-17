// #include<iostream>
// #include<math.h>
// #include<string>
// #include<conio.h>

// using namespace std;

// int binarySearch(int array[], int n, int key)
// 
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

// int main()
// {
//     int n;
//      cin >> n;

//      int array[n];

//      for(int i = 0; i < n; i++)
//      {
//          cin >> array[i];
//      }

//      int counter =1;

//     while (counter<n)
//     {
//        for (int i = 0; i < n-counter; i++)
//        {
//            if (array[i]> array[i+1])        
//            {
//                int temp = array[i];
//                array[i] = array[i+1];
//                 array[i+1] = temp;
//             }
           
//        }
//        counter++;
        
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << array[i] << "";
//     } 
//      cout  <<endl;
//     return 0;
// }

// class Student{
// public:
//     string name;
//     string section;
//     int year;
//     int age;
//     int height;
//     int weight;

//     Student(string q, string w, int e, int r, int t, int y){
//         name=q;
//         section=w;
//         year=e;
//         age=r;
//         height=t;
//         weight=y;
//         }

// void Abilities(){
//     cout<< "He/She is a very smart and speedy student";
//     cout<< "Name"<< name<<endl;
//     cout<< "Section"<< section <<endl;
//     cout<< "Year"<< year <<endl;
//     cout<< "Age"<< age <<endl;
//     cout<< "Height"<< height <<endl;
//     cout<< "Weight"<< weight<<endl;
// }
// };

// int main(){
//     Student student_1("Reena","A",2,20,170,60);
//     student_1.Abilities();
// }
#include<iostream>
#include<cstdlib>
#include<string>
#include<conio.h>

using namespace std;

int main()
{
    srand(67);
    for (int j = 0; j < 25; j++)
    {
        cout << 1+(rand()%6) <<endl;
    }
    
    return 0;
}
