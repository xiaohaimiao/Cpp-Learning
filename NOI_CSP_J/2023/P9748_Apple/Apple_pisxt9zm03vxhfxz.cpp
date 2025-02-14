// document.querySelector(".ub-html").innerText.replace(/\n\n/g, "\n")
#include <iostream>
#include <vector>

using namespace std;

int main() {
    system("chcp 65001 > nul");
    
    int n = 10;
    int m;
    //cout << "请输入要拿的苹果的数字：";
    cout << "请输入苹果的总数：";
    cin >> m;

    vector<int> apples(n);
    for (int i = 0; i < n; ++i) {
        apples[i] = i + 1;
    }

    int days = 0;
    int day_n_taken = 0;

    while (!apples.empty()) {
        ++days;
        vector<int> remaining_apples;
        for (int i = 0; i < apples.size(); ++i) {
            if (i % 3 != 0) {
                remaining_apples.push_back(apples[i]);
            } else if (apples[i] == m) {
                day_n_taken = days;
            }
        }
        apples = remaining_apples;
    }

    cout << days << " " << day_n_taken << endl;

    return 0;
}
