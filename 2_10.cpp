#include <iostream>
using namespace std;
int n;
int maximum;
int a;
int main()
{
    setlocale(LC_ALL, "RUS");
    maximum = 0;
    cout << "������� ���-�� ��������� ������������������, � ����� ������� ���� ������������������: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (a >= maximum)
        {
            maximum = a;
        }
    }
    cout << "������������ ������� �������: " << maximum;
    return 0;
}
