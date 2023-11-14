#include <iostream>

using namespace std;
int factorial(int n)
{
	if (n <= 1)
	{
		cout << n << "=";
		return 1;
	}

	cout << n << "*";
	return n * factorial(n - 1);
}

int main()
{
	int result = factorial(10);
	cout << result << endl;

	return 0;
}
