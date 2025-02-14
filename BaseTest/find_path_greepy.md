# 贪心算法学习心得

## 一、算法心得

这类问题是。。。——请教AI



## 二、结构体



## 三、C++的STL，容器类，vector









## 四、指针的内存分配和回收

### 1. C/C++的内存分配机制：栈和堆



### 2. 内存泄漏和野指针问题



### 3. 指针访问了错误的内存的问题



### 4. 对比C/C++风格的内存分配、初始化和回收方式

#### 4.1 C 风格

##### 用 malloc 分配内存

```c
void* malloc(size_t size);
```

> - 引用头文件：stdio.h、stdlib.h
> - **参数**：`size` 表示需要分配的内存字节数。
> - **返回值**：如果内存分配成功，返回一个指向新分配内存的起始地址的 `void*` 指针；如果分配失败（例如内存不足），则返回 `NULL`。

注意：需要检查内存分配是否成功，否则对一个无效的指针进行操作会产生不可预料的结果。

下面是为指针分配内存并检查的用法：

```c
// 分配一个 int 类型的内存空间
int *ptr = (int*)malloc(sizeof(int));
// 检查内存是否分配成功
if (ptr == NULL) {
    printf("内存分配失败\n");
    return 1;
}
```

下面是为类型为结构体的数组指针分配内存并检查的用法：

```c
// 定义类型 Point
struct Point {
    int X;
    int Y;
};
int n = 10;
// 分配 n 个 Point 类型的内存空间
int *ptr = (Point*)malloc(sizeof(Point) * n);
// 检查内存是否分配成功
if (ptr == NULL) {
    printf("内存分配失败\n");
    return 1;
}
```

##### 用 memset 设置内存的值

##### calloc 分配内存及初始化

```c
void* calloc(size_t num, size_t size);引用头文件：stdio.h、stdlib.h
```

> - 引用头文件：stdio.h、stdlib.h
> - `num`: 要分配的元素数量。
> - `size`: 每个元素的大小（以字节为单位）。

注意：本函数会初始化为0

下面是为类型为结构体的数组指针分配内存并检查的用法：

```c
// 定义类型 Point
struct Point {
    int X;
    int Y;
};
int n = 10;
// 分配 n 个 Point 类型的内存空间
int *ptr = (Point*)calloc(n, sizeof(Point));
// 检查内存是否分配成功
if (ptr == NULL) {
    printf("内存分配失败\n");
    return 1;
}
```

##### free 回收内存

对传入的指针的内存进行回收

##### realloc 重新分配内存

```
void* realloc(void* ptr, size_t size);
```

> `ptr`：指向之前分配的内存块的指针。如果 `ptr` 为 `NULL`，则 `realloc` 的行为等同于 `malloc`，即分配一个大小为 `size` 的新内存块。`size`：指定要调整后的新内存块的大小，单位是字节。

> `size`：指定要调整后的新内存块的大小，单位是字节。
> 
> 如果分配失败，则返回 `NULL`

```c

// 定义类型 Point
struct Point {
 int X;
 int Y;
};
int n = 10;
// 分配 n 个 Point 类型的内存空间
int *ptr = (Point*)malloc(sizeof(Point * n));
// 检查内存是否分配成功
if (ptr == NULL) {
 printf("内存分配失败\n");
 return 1;
}
// 为ptr重新分配 n + 1 个 Point 类型的内存空间
int *ptr = (Point*)realloc(ptr, sizeof(Point * n + 1));
// 检查内存是否分配成功
if (ptr == NULL) {
 printf("内存分配失败\n");
 return 1;
}
```



#### 4.2 C++ 风格

##### 用 new 分配内存

```cpp
type* pointer = new type;
```

> 这里的 `type` 是要分配内存的对象类型，`pointer` 是指向该对象的指针。例如：

```cpp
#include <iostream>
int main() {
    // 为单个 int 类型对象分配内存
    int* numPtr = new int;
    *numPtr = 42;
    std::cout << "The value is: " << *numPtr << std::endl;
    // 释放内存
    delete numPtr;
    return 0;
}
```

##### 用 fill 格式化内存

```cpp
void fill( ForwardIt first, ForwardIt last, const T& value ); 
```

> `first`：指向要填充范围起始位置。
> 
> `last`：指向要填充范围结束位置（该位置本身不包含在填充范围内）。
> 
> `value`：要赋给范围内每个元素的值，类型为 `const T&`，表示传入的值在函数内部不会被修改。



##### 用 delete 回收内存

对传入的指针的内存进行回收

```cpp
delete ptr
```

## 五、其他

### 1. size_t

表示一个无符号整数。

### 2. const T&

表示传入的值在函数内部不会被修改。
