
#include <iostream>
using namespace std;

int main()
{
    int n, v[1000];
    int m = 0;
    
    cout << "Insert your n: ";
    cin >> n;

    for (int i = 0; i <= n-1; i++)
    {
        cout << "Insert your " << i+1 << " number: ";
        cin >> v[i];
    }
    int k = n-1;
    while (m <= k)
    {
        cout << v[m] << " ";

        if (m != k)
        {
            cout << v[k] << " ";
        }
        m++;
        k--;
    }
    // felicitari si pentru implementarea asta! 
    // O alternativa putea sa fie sa afisezi in mod
    // constant v[m] si v[n-1-m] 
}
