#include <iostream>
using namespace std;

int main() 
{
	int n, i, s = 1;
	cin >> n; // ���� ����� n
	for (i = 1; i <= n; i++) //���� ������������ �� ��� ���, ���� i �� �������� n
	{
		s =s*i;
	}
	cout << s << "\n";
	return 0;
}
