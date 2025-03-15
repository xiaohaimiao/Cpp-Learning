/*
求 100 之内的素数（质数）
- 写一个函数 `isPrime(number:int)` 判断 `number` 是否是素数，如果是则返回 `True`，否则返回 `False`；
- 然后用 `1-100` 的循环调用这个函数，判断每一个数字是否是素数并输出，如：
> 素数：2, 3, 5, 7, 11, ....
> 非素数：1, 4, 6, 8, 9, 10, ...
试除法
*/
#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int number)
{
    // 直接返回2、3
    if (number == 2 || number == 3)
        return true;
    // 剪枝：剪2、3的倍数
    if (number % 2 == 0 || number % 3 == 0)
        return false;

    int limit = sqrt(number);
    for (int i = 5; i <= limit; i += 6)
    {
        if (number % i == 0 || number % (i + 2) == 0)
            return false;
    }
    return true;
}
int main()
{
    for (int i = 2; i <= 100; i++)
    {
        if (isPrime(i))
            cout << i << " ";
    }
    return 0;
}