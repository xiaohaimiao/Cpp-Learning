# include <iostream>
using namespace std;
int a;
int main(){
    cin >> a;
    int c[a];
    for (int i = 0; i < a; i++){
        cin >> c[i];
    }
    int min = c[0];
    for (int i = 0; i < a; i++){
        if (c[i] < min){
            min = c[i];
        }
    }
    return 0;
}