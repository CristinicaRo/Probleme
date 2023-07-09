#include <iostream>
using namespace std;

int main()
{
    int n, v[1000];
    
    cout << "Insert your n: ";
    cin >> n;

    for (int i = 0; i <= n-1; i++)
    {
        cout << "Insert your " << i+1 << " number: ";
        cin >> v[i];
    }

    for (int i = 0; i <= n-1; i++)
    {
        if (i % 2 != 0)
        {
            cout << v[i] << " ";
        }
    }
    cout << "\n";

    for (int j = n; j >= 0; j--)
    {
        if (j % 2 == 0)
        {
            cout << v[j] << " ";
        }
    }

}
