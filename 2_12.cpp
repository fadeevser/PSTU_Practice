#include <iostream>
using namespace std;
int n, a;
int maximum = INT_MIN;
int minimum = INT_MAX;
int main()
{
    setlocale(LC_ALL, "RUS");
    cout << "Введите кол-во элементов" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        {
            if (a > maximum)
            {
                maximum = a;
            }
            if (a < minimum)
            {
                minimum = a;
            }
        }
    }
    cout << maximum + minimum;
    return 0;
}