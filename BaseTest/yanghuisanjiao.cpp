#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

// 生成杨辉三角
vector<vector<int>> generate(int numRows) {
    if (numRows == 0) {
        return {};
    }
    vector<vector<int>> result(numRows);
    for (int i = 0; i < numRows; ++i) {
        result[i].resize(i + 1);
        result[i][0] = result[i][i] = 1;
        for (int j = 1; j < i; ++j) {
            result[i][j] = result[i - 1][j - 1] + result[i - 1][j];
        }
    }
    return result;
}

// 打印杨辉三角
void printPascalsTriangle(const vector<vector<int>>& triangle) {
    for (const auto& row : triangle) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    system("chcp 65001>nul");
    int numRows;
    cout << "请输入杨辉三角的行数：" << endl;
    cin >> numRows;

    vector<vector<int>> pascalsTriangle = generate(numRows);
    printPascalsTriangle(pascalsTriangle);

    return 0;
}