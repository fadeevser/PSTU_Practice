#include <iostream>
using namespace std;
int n;
int sum;
int main()
{
    setlocale(LC_ALL, "RUS");
    sum = 0;
    cout << "¬ведите кол-во чисел в последовательности" << endl;;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if ((i % 2) == 0)
        {
            sum = sum + i;
        }
        else
        {
            sum = sum - i;
        }
    }
    cout << "—умма последовательности равна: " << endl;;
    cout << sum;
    return 0;
}