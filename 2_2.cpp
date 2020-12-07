#include <iostream>
using namespace std;

int main() 
{
	int n, i, s = 1;
	cin >> n; // ¬вод числа n
	for (i = 1; i <= n; i++) //÷икл вы≠полн€етс€ до тех пор, пока i не превысит n
	{
		s =s*i;
	}
	cout << s << "\n";
	return 0;
}
