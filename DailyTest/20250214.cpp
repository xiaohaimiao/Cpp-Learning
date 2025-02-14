#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double x, y;
    cin >> x;
    
    if (x >= 20 || x < 0)
        return -1;  // 超出范围
    if (x >= 10)
        y = x / 2 - 1.5;
    else if (x >= 5)
        y = 2 - 1.5 * (x-3) * (x-3);
    else
        y = 2.5 - x;

    cout << fixed << setprecision(3) << y;
    return 0;
}