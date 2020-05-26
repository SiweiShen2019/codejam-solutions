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
vector<int> w (5, 0); // 5 zeros
v.push_back(1); // append 1 to the vector
v.pop_back(); // remove the last element in the vector
```

### Linked List

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
