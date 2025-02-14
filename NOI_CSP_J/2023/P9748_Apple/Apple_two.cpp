#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    system("chcp 65001>nul");

    int days = 0;
    int day_m_taken = 0;
    int n, m;
    cout << "输入：";
    cin >> n >> m;

    while (n > 0) {
        ++days;
        if (m % 3 == 1) {
            day_m_taken = days;
        }
        cout << "n=" << n << "," << "days=" << days << endl;
        cout << "m=" << m << "," << "day_m_taken=" << day_m_taken << endl;
        n -= (n + 2) / 3;
        m -= (m + 2) / 3;
    }
    cout << days << " " << day_m_taken << endl;

    return 0;
}