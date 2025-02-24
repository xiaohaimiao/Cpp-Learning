#include <iostream>
using namespace std;

// 用数论判断是否是回文数
bool isPalindromeNumber(int num)
{
    int newNum, x = num;
    while (x != 0)
    {
        newNum = newNum * 10 + x % 10;
        x = x / 10;
    }
    return num == newNum;
}

int main()
{
    int num;
    cin >> num;
    if (num < 100 || num >= 1000) // 范围检查
        return -1;

    // 使用数学方法判断回文数
    string text = isPalindromeNumber(num) ? "YES" : "NO";
    cout << text << endl;

    return 0;
}
