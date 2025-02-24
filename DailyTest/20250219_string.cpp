#include <iostream>
#include <string>
#include <algorithm> // for std::reverse
using namespace std;
// 使用字符串倒序的方法判断回文数，引用代替指针
string reverseString(const string &strNum) // constant 常量
{
    string reversedStr;
    reversedStr.reserve(strNum.size());
    for (char c : strNum)
        reversedStr = c + reversedStr;
    return reversedStr; 
}
// 使用字符串倒序的方法判断回文数，使用指针传参
string reverseStringByPointer(const string *strNum_ptr)
{
    int len = strNum_ptr -> length();
    string reversedStr;
    reversedStr.reserve(len);
    for (int i = 0; i < len; i++)
        reversedStr = strNum_ptr[i] + reversedStr;
    return reversedStr; 
}
int main()
{
    int num;
    cin >> num;
    if (num < 100 || num >= 1000) // 范围检查
        return -1;

    // 使用反转字符串的方法判断回文数
    string strNum = to_string(num);
    string* strNum_ptr = &strNum;
    //string reversedStr = reverseStringByPointer(strNum_ptr);
    string reversedStr = reverseString(strNum);
    //if (*strNum_ptr == reversedStr)
    if (strNum == reversedStr)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}