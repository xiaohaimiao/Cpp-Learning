#include <iostream>
using namespace std;
double a, b, c;
int total, hens_summation, d;
int main(){
    cin >> a >> b >> c;
    cin >> total >> hens_summation;
    //total = 100;
    //hens_summation = 100;
    d = total / (a + b + c);
    int e = a + b + c;
    if (total % e != 0){
        cout << "题目有误！" << endl;
        return 0;
    }
    if (a <= 0 || b <= 0 || c <= 0){
        cout << "题目有误！" << endl;
        return 0;
    }
    if (d * a + d * b + d * c != hens_summation){
        cout << "题目有误！" << endl;
        return 0;
    }
    cout << endl << d * a << endl << d * b << endl << d * c << endl;
    return 0;
}