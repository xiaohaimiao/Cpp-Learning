#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num;
    cin >> num;
    // 范围检查
    if (num <= 0 || num >= 10000)
        return -1;
    // int 转 string
    string strNum = to_string(num);
    int length = strNum.length();       // 取长度
    cout << length;
}