#include <iostream>
//#include "FileName.h"
using namespace std;

int main()
{
    int n, c;
    int a = 1;
    int b = 1;
 
    cout << "Insert your n: ";
    cin >> n;


    switch (n)
    {
    case 0:
        return 0;
    case 1:
        cout << a << " ";
        break;
    default:
        cout << a << " " << b << " ";
        break;
    }
    
    for (int i = 2; i <= n - 1; i++)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}