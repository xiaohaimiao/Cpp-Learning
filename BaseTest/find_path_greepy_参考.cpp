#include <cstdlib>
#include <iostream>
#include <cmath>
#include <random>
#include <ctime>
using namespace std;

// type 类型，define 定义，struct 结构体
// class 类，union 联合，enum 枚举，typedef 类型定义
typedef struct
{
    int x;
    int y;
} Point;

Point *create_map(int n)
{
    srand(time(0));
    Point *map = new Point[n];
    for (int i = 0; i < n; i++)
    {
        map[i].x = rand() % 100;
        map[i].y = rand() % 100;
    }
    return map;
}

double distance(Point p1, Point p2)
{
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}
/**
 * @brief 使用贪心算法找到从起始点开始的路径
 * 
 * 该函数通过贪心算法，从给定的起始点开始，每次选择距离当前点最近且未访问过的点，直到遍历完所有点。
 * 
 * @param map 包含所有点的数组
 * @param map_length 点数组的长度
 * @param start 起始点
 * @return Point* 包含路径的点数组
 */
Point* find_path_greepy(Point map[], int map_length, Point start)
{
    // 分配内存用于存储路径
    Point *path = new Point[map_length];
    // 分配内存用于标记每个点是否被访问过
    int *visited = new int[map_length];
    // 初始化所有点为未访问状态
    fill(visited, visited + map_length, 0);
    // 遍历所有点
    for (int i = 0; i < map_length; i++)
    {
        // 初始化最小距离为一个较大的值
        double min_distance = 1000000000;
        // 初始化最小距离点的索引为 0
        int min_index = 0;
        // 初始化当前距离为 0
        double dis = 0;
        // 输出当前迭代的信息
        cout << "No." << i << " (" << start.x << "," << start.y << ")"  << endl;
        // 遍历所有点
        for (int j = 0; j < map_length; j++)
        {
            // 如果该点已经被访问过，则跳过
            if (visited[j] == 1) continue;
            //cout << "\t" << map[j].x << "," << map[j].y << endl;
            // 获取当前点
            Point point = map[j];
            // 计算当前点与起始点的距离
            dis = distance(point, start);
            // 如果当前距离小于最小距离
            if (dis < min_distance)
            {
                // 更新最小距离
                min_distance = dis;
                // 更新最小距离点的索引
                min_index = j;
            }
            // 输出当前点的信息和距离
            cout << "\tNo." << j;
            cout << "\t" << "(" << start.x << "," << start.y << ")" << " to ";
            cout << "(" << point.x << "," << point.y << ")" << " dis:";
            cout << dis << " ? ";
            cout << min_distance << endl;
        }
        // 将最小距离的点加入路径
        path[i] = map[min_index];
        // 标记该点为已访问
        visited[min_index] = 1;
        // 更新起始点为路径中的下一个点
        start = path[i];
        // 输出选择的点的信息
        cout << "Choosed:" << "<" << min_index << "> " << "(" << start.x << "," << start.y << ")" << endl;
    }
    // 返回路径
    delete[] visited;
    return path;
}

int main()
{
    // 创建坐标地图
    int n = 10;
    Point* map = create_map(n);

    // 用贪心算法计算最优路径
    int length = n;
    Point start = Point{0, 0};
    Point* path = find_path_greepy(map, length, start);
    // 输出最优路径
    cout << "Greedy Algorithm: " << endl;
    cout << "Length: " << length << endl;
    cout << "Path: (" << start.x << ", " << start.y << ")";
    for (int i = 0; i < length; i++)
    {
        cout << " -> (" << path[i].x << ", " << path[i].y << ")";
    }

    // 释放内存
    delete[] map;
    map = nullptr;
    delete[] path;
    path = nullptr;

    return 0;
}
