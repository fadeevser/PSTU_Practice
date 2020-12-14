#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	float n, z, a;
	bool flag = false;
	cout << "¬ведите сначала n, а потом z" << endl;
	cin >> n >> z;
	for (int i = 0; i < n; i++)
	{
		if (n > 0)
		{
			a = sin(n + i / n);
			cout << a << " ";
			if (a == z)
			{
				flag = true;
				break;
			}
		}
	}
	if (flag)
		cout << "Yes";
	else cout << "No";
	return 0;
}