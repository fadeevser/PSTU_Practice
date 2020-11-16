#include <iostream>
#include <cmath>
using namespace std;
int a, n;
int main()
{
    cin >> a;
    n = sqrt(a);
    for (int a = 1; a <= n; a++)
    {
        for (int b = 1; b <= n; b++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}