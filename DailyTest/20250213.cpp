#include <iostream>
using namespace std;

int main()
{
    int num;        // 成绩
    char level;     // 级别
    cin >> num;
    
    if (num > 400 || num < 0)
        return -1;  // 超出范围
    if (num >= 248)
        level = 'A';
    else if (num >= 100)
        level = 'B';
    else if (num >= 70)
        level = 'C';
    else
        level = 'D';

    cout << level;
    return 0;
}