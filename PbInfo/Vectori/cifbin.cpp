#include <iostream>
#include <bitset>
using namespace std;

#define printBin(x)   cout<<#x<<":\t"<<bitset<32>(x)<<"\n";


int main()
{
	int n = 174;
	int Z = 0;
	int U = 0;

	while (n!=0)
	{
		if (n & 1)
		{
			U++;
		}
		else 
		{
			Z++;
		}
		n = n >> 1;
	}
	cout << U << " " << Z;
}
