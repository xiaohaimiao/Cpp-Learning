#include <iostream>
using namespace std;

int main()
{
    int id, group;
    cin >> id;
    // 范围检查
    if (id < 1 || id > 49)
        return -1;
    int lastDigit = id % 10;       // 求学号的尾数（个位）
    // 对尾数求 3 的余数，作为组号
    group = lastDigit == 0 ? 3 : lastDigit;
    cout << group;
    return 0;
}