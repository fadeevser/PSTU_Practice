#include <iostream> 
using namespace std;
int n;
int main()
{
    cin >> n;
    for (int a = n; a > 0; a--)
    {
        for (int b = 0; b < n; b++)
        {
            if (a + b >= n)
            {
                cout << '*';
            }
            else
            {
                cout << " ";
            }

        }
        cout << "\n";
    }
    return 0;
}