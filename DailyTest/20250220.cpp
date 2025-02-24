#include <iostream>
using namespace std;

int main() {
    int totalFeet, totalAnimals;
    cin  >> totalAnimals >> totalFeet;
    const int henFeet = 2;
    const int rabbitFeet = 4;
    // 输入验证
    if (totalFeet < 1 || totalAnimals < 1)
        return -1;

    int rabbits = (totalFeet - henFeet * totalAnimals) / (rabbitFeet - henFeet);
    int hens = totalAnimals - rabbits;
    // 结果验证
    if (rabbits < 0 || hens < 0 || hens * henFeet + rabbits * rabbitFeet != totalFeet)
        return -1;

    cout << hens << " ";
    cout << rabbits << endl;

    return 0;
}