#include <iostream>
using namespace std;

bool isLeapYear(int year)
{
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}
int isLeapYear_Int(int year)
{
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? 1 : 0;
}

int main()
{
    int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year, month;
    cin >> year >> month;

    // 检查数据是否有效
    if ((year < 1900 || year > 2200) || (month < 1 || month > 12))
        return -1;
    int days = daysInMonth[month - 1];
    if (month == 2)
        days += isLeapYear(year);
    // 注意：C/C++ 中默认将 bool 值视为 0/1，但不推荐此种写法

    cout << days;

    return 0;
}