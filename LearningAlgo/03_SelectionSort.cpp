#include <iostream>
#include <vector>
using namespace std;

vector<int> BubbleSort(vector<int> unSort)
{
    for(int i = 0; i < unSort.size(); i++){
        int min = unSort[i];
        int pos = i;
        for(int j = i; j < unSort.size(); j++){
            if (unSort[j] < min){
                min = unSort[j];
                pos = j;
            }
            cout << min << ", ";
        }
        swap(unSort[i], unSort[pos]);
        cout << min << endl;
    }
    return unSort;
}

int main()
{
    vector<int> unSort = {1, 4, 7, 2};
    vector<int> sorted;
    sorted = BubbleSort(unSort);
    cout << "排序结果：" << endl;
    for (int i : sorted)
    {
        cout << i << ' ';
    }
    cout << endl;
    return 0;
}