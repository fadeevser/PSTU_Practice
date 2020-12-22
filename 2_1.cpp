#include <iostream>
using namespace std;

int main() 
{
	setlocale(LC_ALL, "RUS");
	int n, i, s = 0;
	cin >> n; // Ââîä ÷èñëà n
	for (i = 1; i <= n; i++) //Öèêë âû­ïîëíÿåòñÿ äî òåõ ïîð, ïîêà i íå ïðåâûñèò n
	{ 
		s += i;
	}
	cout << s << "\n";
	return 0;
}
