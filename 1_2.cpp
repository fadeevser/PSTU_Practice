#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "������� 2 �����:" << endl;
    float a, b;
    cin >> a >> b;
    if (b != 0) {
        cout << a / b;
    }
    else {
        cout << "������������ ����";

    }
    return 0;
}