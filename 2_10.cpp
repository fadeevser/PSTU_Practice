#include <iostream>
using namespace std;
int n;
int maximum;
int a;
int main()
{
    setlocale(LC_ALL, "RUS");
    maximum = 0;
    cout << "Введите кол-во элементов последовательности, а затем введите саму последовательность: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (a >= maximum)
        {
            maximum = a;
        }
    }
    cout << "Максимальный элемент массива: " << maximum;
    return 0;
}
