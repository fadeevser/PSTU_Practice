#include <iostream>
#include <string> 
using namespace std;
int z, n;
bool flag = false;
int main()
{
    setlocale(LC_ALL, "RUS");
    cout << "������� �����: " << endl;;
    cin >> n;
    cout << "������� ����� ��� �������� ��� � N: " << endl;;
    cin >> z;
    while (n % 10 > 0)
    {
        if ((n % 10) == z)
        {
            flag = true;
            break;
        }
        else
        {
            n = n / 10;
        }
    }
    if (flag == true)
    {
        cout << "����� Z ������ � ����� N";
    }
    else
    {
        cout << "����� Z �� ������ � ����� N";
    }
    return 0;
}