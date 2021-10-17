#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
    srand(time(0));
    for (int j = 0; j < 5; j++)
    {
        cout << 1+(rand()%6) <<endl;
    }
    
    return 0;
}