#include <iostream>
using namespace std;

int main()
{
    int n, row, column;
    cin >> n;
    
    if (n < 1 || n > 49)        // 范围检查
        return -1;
    row = (n - 1) / 7 + 1;      // 行号计算
    column = (n + 6) % 7 + 1;   // 列号计算
    cout << row << " " << column;
    return 0;
}