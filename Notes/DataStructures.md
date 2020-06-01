# Data Structures
## Linear Data Structures
### Static Array

```cpp
int a[3];
int b[] = {1, 2, 3};
int* p = b; // point to 1
++p; // point to 2
*p = 4; // b: {1, 4, 3}
```

Some useful facts:
- scanf into an array: `scanf("%d", &a[i])`

### Dynamically-Resizeable Array

```cpp
#include <vector>

vector<int> v;
vector<int> w (3, 0); // 3 zeros: {0, 0, 0}
w.push_back(1); // append 1 to the vector: {0, 0, 0, 1}
w.size(); // 4
w.pop_back(); // remove the last element in the vector: {0, 0, 0}
w.size(); // 3
```

### Linked List
In most competitive programming problems, use `vector` instead.

### Stack

```cpp
#include <stack>

stack<int> s;
for (int i=0; i<5; ++i)
  s.push(i);
// s: {4, 3, 2, 1, 0}
s.top(); // 4
s.pop(); // s: {3, 2, 1, 0}
s.empty(); // false
s.size(); // 4
```

### Queue

### Double-ended Queue (Deque)
