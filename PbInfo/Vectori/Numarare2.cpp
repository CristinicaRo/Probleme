#include <iostream>
using namespace std;

int main()
{
    int n, v[1000];
    int ma = 0;
    int count = 0;

    cout << "Insert your n: ";
    cin >> n;

    for (int i = 0; i <= n-1; i++)
    {
        cout << "Insert your " << i+1 << " number: ";
        cin >> v[i];
    }
    for (int i = 0; i <= n - 1; i++)
    {
        ma = ma + v[i];
    }
    ma = ma / n;
    for (int i = 0; i <= n - 1; i++)
    {
        if (ma < v[i])
        {
            count++;
        }
    }
    cout << count;
}
