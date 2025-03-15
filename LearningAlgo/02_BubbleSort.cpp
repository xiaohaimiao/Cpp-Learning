#include <iostream>
#include <vector>
using namespace std;

vector<int> BubbleSort(vector<int> unSort)
{
    int x, size = unSort.size();
    bool isSwapped;
    for (int i = 0; i < size - 1; i++) {
        // 修正内层循环条件
        for (int j = 0; j < size - i - 1; j++) {
            if (unSort[j] > unSort[j + 1]) {
                swap(unSort[j], unSort[j + 1]);
                isSwapped = true;
            }
        }
        if (not isSwapped){
            break;
        }
    }
    return unSort;
}

int main()
{
    vector<int> unSort = {1, 4, 7, 2};
    vector<int> sorted;
    sorted = BubbleSort(unSort);
    for (int i = 0; i < sorted.size(); i++)
    {
        cout << sorted[i] << ' ';
    }
    cout << endl;
    return 0;
}