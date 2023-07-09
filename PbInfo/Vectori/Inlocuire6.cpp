#include <iostream>
using namespace std;

int main()
{
    int n, v[1000];
    int d = 0;
    
    cout << "Insert your n: ";
    cin >> n;

    for (int i = 0; i <= n-1; i++)
    {
        cout << "Insert your " << i+1 << " number: ";
        cin >> v[i];
    }
    for (int j = n - 1; j >= 0; j--)
    {
        d = 0;

        for (int k = 1; k <= v[j]; k++)
        {
            if (v[j] % k == 0)
            {
                d++; 
            }
        }
        if (d == 2)
        {
            v[j] = 0;
            break;
        }
        // foarte bine, dar k poate sa mearga de la 2 la sqrt(v[j]) ca sa fie un pic mai eficient
        // avatanajul este ca in range-ul [2, sqrt(numar)], daca numar este prim, atunci d=0
        // si ca sqrt(numar) este mult mai mic decat numar
        // ex pt numar=1 000 000, sqrt(numar) = 1 000
        // de asemenea, ar fi good practice sa iti definesti o functie isPrime(n) unde sa ai 
        // implementarea respectiva
        
    }
    for (int i = 0; i <= n - 1; i++)
    {
        cout << v[i] << " ";
    }
}
