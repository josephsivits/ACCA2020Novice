#include <iostream>
using namespace std;

int combination(int a, int b);

int main()
{
	int a, b;

	cin >> a >> b;

	while (!(a == 0 && b == 0))
	{
		cout << "There are " << combination(a, b) << " 4-tuples\n";
		cin >> a >> b;
	}
}

int combination(int a, int b)
{
	int fact4 = 24;
	int c = b - a + 1;
	int r = c - 4;
	int cTotal = 1;
	int rTotal = 1;

	for (int i = c; i > r; i--)
		cTotal *= i;

	return (cTotal / fact4);

}