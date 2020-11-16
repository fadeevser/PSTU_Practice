#include <iostream> 
using namespace std;
int n;
int main()
{
    cin >> n;
    for (int a = 1; a <= n; a++)
    {
        for (int b = 1; b <= n; b++)
        {
            if (a + b <= n)
            {
                cout << ' ';
            }
            else
            {
                cout << "*";
            }

        }
        cout << "\n";
    }
    return 0;
}