#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите 2 числа:" << endl;
    float a, b;
    cin >> a >> b;
    if (b != 0) {
        cout << a / b;
    }
    else {
        cout << "Неправильный ввод";

    }
    return 0;
}