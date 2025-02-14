#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream fin("candy3.in");
    ofstream fout("candy3.out");
    int n = 0, L = 0, nengLiFanWei = 0, jiangLi = 0, min = 0, x = 0;
    fin >> n >> L >> nengLiFanWei;
    min = 2 * n - 1;
    while (true)
    {
        if (min < L){
                min += n;
                x = 1;
            }
        if (min > nengLiFanWei && x == 1){
                min = nengLiFanWei;
        }
        if (min <= nengLiFanWei && x == 1){
            break;
        }
        if (min > nengLiFanWei && x == 0){
            min = nengLiFanWei - n;
        }
    }
    jiangLi = min % n;
    cout << jiangLi;
    fout << jiangLi;
    return 0;
}