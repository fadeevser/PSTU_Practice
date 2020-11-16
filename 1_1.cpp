#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    int a, b, c;

    cout << "Введите 3 числа: ";
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

    cout << "Максимальное число: " << max << endl;

    return 0;
}