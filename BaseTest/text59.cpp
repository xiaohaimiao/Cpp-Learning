#include <iostream>
using namespace std;
int hensFeet, rabbitsFeet, feetSummation, animalSummation;
int main(){
    cin >> hensFeet >> rabbitsFeet >> feetSummation >> animalSummation;
    int a = 0, b = 0;
    if (hensFeet < rabbitsFeet){
        a = hensFeet;
        hensFeet = rabbitsFeet;
        rabbitsFeet = a;
    }
    a = hensFeet * animalSummation - feetSummation;

    if (a <= 0){
        cout << "题目有误！" << endl;
        return 0;
    }


    b = hensFeet - rabbitsFeet;
    if (a % b != 0){
        cout << "题目有误！" << endl;
        return 0;
    }

    b = a / b;
    a = animalSummation - b;
    if (b <= 0 || a <= 0){
        cout << "题目有误！" << endl;
        return 0;
    }

    cout << endl << a << endl << b << endl;
    return 0;
}