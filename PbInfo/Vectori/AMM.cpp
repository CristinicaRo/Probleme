#include <iostream>
using namespace std;

int main()
{
    int n, v[1000], p, o;
    int max = 0;

    cout << "Insert your n: ";
    cin >> n;

    for (int i = 0; i <= n-1; i++)
    {
        cout << "Insert your " << i+1 << " number: ";
        cin >> v[i];
    }

    int min = v[0];

    for (int i = 0; i <= n - 1; i++)
    {
        if (v[i] > max)
        {
            max = v[i];
            p = i;
        }
        if (v[i] < min)
        {
            min = v[i];
            o = i;
        }
    }

    while (p > o)
    {
        for (int i = o; i <= p; i++)
        {
            cout << v[i] << " ";
        }
        break;
    }
    while (o > p)
    {
        for (int i = p; i <= o; i++)
        {
            cout << v[i] << " ";
        }
        break;
    }

    // Implementarea este buna, dar daca observi codul ‘pare’ duplicat la final
    // o alternativa era ca dupa for-ul unde ti-ai calculat min si max, sa pui
    // start = min(o, p)  //vb de functia min, nu de variabila ta
    // stop = max(o, p)
    // for (i = start; i <= stop; i++)
    // ..

    return 0;
}
