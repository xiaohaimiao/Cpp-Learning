#include <iostream>
using namespace std;
int mod(int a, int b){
    return (a % b + b) % b;
}
int main(){
    int a, b;
    cin >> a >> b;
    int c =  mod(a, b);
    cout << c << endl;
    cout << a%b << endl;
    return 0;
}