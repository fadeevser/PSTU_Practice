#include <iostream>
using namespace std;
int n;
int chislo;
int a;
bool flag;
int main()
{
    setlocale(LC_ALL, "RUS");
    cout << "������� ���-�� ���������" << endl;
    cin >> n;
    cout << "������� �������� ������������������: ";
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (a == 0)
        {
            flag = false;
        }
        if (a > 0)
        {
            cout << "������������������ �������������";
            flag = true;
            break;
        }
        if (a < 0)
        {
            cout << "������������������ �������������";
            flag = true;
            break;
        }
    }
    if (flag == false)
    {
        cout << "������������������ �������";
    }
    return 0;
}