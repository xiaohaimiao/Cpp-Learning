#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include <vector>

using namespace std;
int main(){
    ifstream fin("poker2.in");
    ofstream fout("poker2.out");
    if (!fin) {
        cerr << "无法打开输入文件 poker1.in" << endl;
        return 1; // 返回错误代码
    }

    int n = 0;
    fin >> n;
    cout << n << endl;

    //set <string> cards;
    vector<string> cards;

    for (int i = 0; i < n; i++){
        string card;
        fin >> card;
        cout << card << endl;
        //cards.insert(card);
    }
    cout << 52 - cards.size() << endl;
    fout << 52 - cards.size() << endl;

    return 0; //1229971738
}