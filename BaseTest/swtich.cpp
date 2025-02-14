#include <cstdio>
#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;

int main()
{
    cout << "test" << endl;
    for (int i = 12800; i < 30000; i++)
    {
        char b = (char)i;
        char c = i;
        cout << i << " '" << b << "'\t" << endl;
    }
    return 0;
}