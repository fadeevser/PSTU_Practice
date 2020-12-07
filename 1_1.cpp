#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int a, b, c;

    cout << "Ââåäèòå 3 ÷èñëà: ";
    cin >> a >> b >> c;

    int max = a;

    if (b > max) 
    {
        max = b;
    }
    if (c > max) 
    {
        max = c;
    }

    cout << "Ìàêñèìàëüíîå ÷èñëî: " << max << endl;

    return 0;
}
