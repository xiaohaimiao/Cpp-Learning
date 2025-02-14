#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
    system("chcp 65001 > nul");
    int k;
    for (int i = 1; i < 10; i++){
        for (int j = 1; j <= i; j++){
            k = i * j;
            cout << i << "×" << j << "=" << setw(2) << setfill(' ') << k << '\t';
        }
        cout << endl;
    }
    return 0;
}