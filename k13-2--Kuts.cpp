#include "stdafx.h"
#include <iostream>
using namespace std;
 
int main(int argc, char* argv[])
{
    cout << "obrabotka massiva" << endl;
    int array1[16] = { 5, -12, -12, 9, 10, 0, -9,
                    -12, -1, 23, 65, 64, 11, 43, 39, -15 }; 
    cout << "indeks" << "\t\t" << "element massiva" << endl; 
    for (int counter = 0; counter < 16; counter++)  
    {
  
     cout << "array1[" << counter << "]" << "\t\t" << array1[counter] << endl;
    }
    system("pause");
    return 0;
}