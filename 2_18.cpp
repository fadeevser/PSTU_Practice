#include <iostream>
using namespace std;
int n, buf;
int main()
{
    setlocale(LC_ALL, "RUS");
    buf = 0;
    cout << "������� ����� N: " << endl;
    cin >> n;
    while ((n % 10) > 0)
    {
        buf = buf + (n % 10);
        buf = buf * 10;
        n = n / 10;
    }
    cout << "����� N � ������� �������: " << endl;
    cout << buf / 10;
    return 0;
}