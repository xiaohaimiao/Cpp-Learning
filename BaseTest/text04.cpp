#include <iostream>
#include <cstdlib> // C Standard Library

using namespace std;

int main(){
    // 调用系统命令：Windows 和 Linux 系统命令不同
    system("chcp 65001>nul");   // 设置控制台输出编码为 UTF-8
    system("cls");   // 清屏

    int n1, n2;
    cout << "一瓶牛奶5块， 要几瓶？" << endl;
    cin >> n1;
    n2 = n1 * 5;
    cout << "要" << n2 << "元";

    return 0;
}

