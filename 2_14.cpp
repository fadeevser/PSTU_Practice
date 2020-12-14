#include <iostream>
#include <string> 
using namespace std;
int sum, k, n;
int main()
{
    setlocale(LC_ALL, "RUS");
    k = 0;
    sum = 0;
    cout << "¬ведите число: ";
    cout << endl;
    cin >> n;
    cout << endl;
    cout << endl;
    while ((n % 10) > 0)
    {
        sum = sum + (n % 10);
        n = n / 10;
    }
    cout << "—умма числа: ";
    cout << endl;
    cout << sum;
    return 0;
}