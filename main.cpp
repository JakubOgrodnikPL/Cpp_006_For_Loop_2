#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

int main()
{
    cout<<"This program counts from 15 to 0 and uses sleep instruction:"<<endl;
    Sleep(2000); // instruction to hold the process for miliseconds
    for(int i=15; i>=0; i--)
    {
        Sleep(500);
        system("cls"); // instruction that clears window content
        cout << i << endl;
    }
   cout<<"KABOOOM!!"
        "\nPress any key to exit";
   getchar();
   return 0;
}
