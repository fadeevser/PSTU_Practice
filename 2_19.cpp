#include <iostream>
using namespace std;
int n;
int sum = 0;
int main()
{
    setlocale(LC_ALL, "RUS");
    cout << "������� ����� ��������� ������������������: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if ((i % 3) == 0)
        {
            sum = sum - i;
        }
        else
        {
            sum = sum + i;
        }
    }
    cout << "����� ������������������ �����: " << endl;
    cout << sum;
    return 0;
}