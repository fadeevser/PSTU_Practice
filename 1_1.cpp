#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    int a, b, c;

    cout << "������� 3 �����: ";
    cin >> a >> b >> c;

    int max = a;

    if (b > max) 
    {
        max = b;
    }
    if (c > max) 
    {
        max = c;
    }

    cout << "������������ �����: " << max << endl;

    return 0;
}