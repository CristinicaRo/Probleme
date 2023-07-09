#include <iostream>
using namespace std;


int main()
{ 
	int n;
	int m;
	int sum = 0;
	cout << "Insert your n: ";
	cin >> n;

	while (n > 0)
	{
		m = n % 10;
		n = n / 10;
		sum = sum + m;
	}
	cout << sum;
}
