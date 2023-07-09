
#include <iostream>
using namespace std;

int main()
{
    int n, f[1000];
    f[0] = 1;
    f[1] = 1;

    cout << "Insert your n: ";
    cin >> n;

    switch (n)
    {
    case 0:
        return 0;
    case 1:
        cout << f[0] << " ";
        break;
    default:
        cout << f[0] << " " << f[1] << " ";
        break;
    }

    for (int i = 2; i <= n-1; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
        cout << f[i] << " ";
    }
    return 0;
    
}
