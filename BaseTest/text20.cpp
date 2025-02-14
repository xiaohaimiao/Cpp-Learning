#include <iostream>

using namespace std;
int main(){

    int num = 55;
    int guess;

    cout << "有一个1~100的数，猜猜它是什么。";
    while(true){
        cin >> guess;
        if (guess < num){
            cout << "小了";
        }
        else if (guess > num){
            cout << "大了";
        }
        else if (guess == num){
            cout << "猜对了"; 
            break;
        }
    }
}