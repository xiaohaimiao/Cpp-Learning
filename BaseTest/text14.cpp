#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
long long a, b, d, a2, b2, d2;
char c;
int main(){
    //a = 2121;
    //b = 12112;
    //c = '-';
    
    cin >> a >> b >> c;
    int length1 = 0; 
    int length2 = 0;
    int length3 = 0;
    int length = 0;
    a2 = a;
    b2 = b;

    if (a == 0) {
        length1 = 1; // 特殊情况：数字0的长度为1
    } else {
        while (a != 0) {
            a /= 10; // 每次除以10，去掉最后一位
            length1++;  // 计数器加1
        }
    }

    if (b == 0) {
        length2 = 1; // 特殊情况：数字0的长度为1
    } else {
        while (b != 0) {
            b /= 10; // 每次除以10，去掉最后一位
            length2++;  // 计数器加1
        }
    }

if (c == '+'){
        d = a2 + b2;
    }
    else if (c == '-'){
        d = a2 - b2;
    }
    else if (c == '*'){
        d = a2 * b2;
    }
    else if (c == '/'){
        d = a2 / b2;
    }

d2 = d;
    if (d == 0) {
        length2 = 1; // 特殊情况：数字0的长度为1
    } else {
        while (d != 0) {
            d /= 10; // 每次除以10，去掉最后一位
            length2++;  // 计数器加1
        }
    }

    if (length1 < length2){
        length = length2 + 4;
    }
    else{
        length = length1 + 4;
    }
    cout << setw(length) << a2 << endl;
    cout << setw(3) << c << setw(length - 3) << b2 << endl; 
    for (int i = 0; i < length + 1; i++){
        cout << "-";
    }
    cout << endl << setw(length) << d2 << endl;
    return 0;
}