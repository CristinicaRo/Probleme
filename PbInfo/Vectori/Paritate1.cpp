#include <iostream>
using namespace std;

int main()
{
    int n, s[1000], c;
    int nrpare = 0;
    int nrimpare = 0;
    cout << "Insert your n: ";
    cin >> n;

    for (int i = 0; i <= n-1; i++)
    {
        cout << "Insert your " << i+1 << " number: ";
        cin >> s[i];

    }
    for (int i = 0; i <= n - 1; i++)
    {
        if (s[i] % 2 != 0)
        {
            nrimpare = nrimpare + 1;
        }
        else
        {
            nrpare = nrpare + 1;
        }
    }
    c = nrimpare - nrpare;
    if (c < 0)
    {
        c = -1 * c;
    }
    // alternativa pentru o singura linie 
    // c = abs(nrimpare - nrpare)
    // totusi vezi ca trebuie sa dai #include cmath ca sa poti folosi abs
    cout << "Your result is: " << c;
}
