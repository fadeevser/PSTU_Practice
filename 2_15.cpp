#include <iostream>
#include <string> 
using namespace std;
int z, n;
bool flag = false;
int main()
{
    setlocale(LC_ALL, "RUS");
    cout << "Введите число: " << endl;;
    cin >> n;
    cout << "Введите цифру для проверки его в N: " << endl;;
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
        cout << "Цифра Z входит в число N";
    }
    else
    {
        cout << "Цифра Z не входит в число N";
    }
    return 0;
}