#include <iostream>
using namespace std;
float a;
int main()
{
    cin >> a; //Ввод числа a
    if (a < 5)
    {
        cout << a*3;
    }
    if ( (a >= 5) & (a <= 7))
        {
            cout << a / 10;
        }
    if (a > 7)
    {
        cout << a + 3; //Вывод ответа.
    }
    return 0;
}
