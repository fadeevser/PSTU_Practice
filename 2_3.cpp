#include <iostream>

using namespace std;

int main()
{
    int n, a, sum;
    cin >> n;
    sum = 0;
    for (int i = 1; i <= n; i++) {
        a = 1;
        for (int j = i; j <= i * 2; j++) {
            a *= j;
        }
        sum += a;
    }
    cout << sum;
    return 0;
}