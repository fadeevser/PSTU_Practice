#include <iostream>
#include <cmath>
using namespace std;
float sum, x, f;
int n, i;
int main()
{
    setlocale(LC_ALL, "RUS");
    sum = 1;
    f = 1;
    cout << "������� ����� ������������������: " << endl;
    cin >> n;
    cout << "������� �������� ���������� X: " << endl;
    cin >> x;
    if (n == 1)
    {
        cout << sum;
    }
    if (n == 0)
    {
        cout << 0;
        goto skip;
    }
    if ((n != 0) && (n != 1))
    {
        for (int i = 2; i <= n; i++)
        {
            sum = sum + pow(x, i - 1) / f;
            f = f * i;
        }
    }
    cout << "����� ������������������ �����: " << endl;
    cout << sum;
skip:
    return 0;
}