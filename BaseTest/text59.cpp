#include <iostream>
using namespace std;
int a_feet, b_feet, feet_sammation, animal_summation;
int main(){
    cin >> a_feet >> b_feet >> feet_sammation >> animal_summation;
    int a = 0, b = 0;
    if (a_feet < b_feet){
        a = a_feet;
        a_feet = b_feet;
        b_feet = a;
    }
    a = a_feet * animal_summation - feet_sammation;

    if (a <= 0){
        cout << "题目有误！" << endl;
        return 0;
    }


    b = a_feet - b_feet;
    if (a % b != 0){
        cout << "题目有误！" << endl;
        return 0;
    }

    b = a / b;
    a = animal_summation - b;
    if (b <= 0 || a <= 0){
        cout << "题目有误！" << endl;
        return 0;
    }

    cout << endl << a << endl << b << endl;
    return 0;
}