#include <iostream>
using namespace std;
#include <cmath>;
int n;
int a, b, c;
double d, x1, x2;
int main()
{
    setlocale(LC_ALL, "RUS");
    cout << "������� �����������";
    cout << endl;
    cout << endl;
    cin >> a >> b >> c;
    d = b * b - (4 * a * c);
    if (d >= 0)
    {
        x1 = ((-b + sqrt(d)) / (2 * a));
        x2 = ((-b - sqrt(d)) / (2 * a));
        cout << "����� ���������:";
        cout << endl;
        cout << x1;
        cout << endl;
        cout << x2;
    }
    if (d < 0)
    {
        cout << "������ ���";
    }
    return 0;
}