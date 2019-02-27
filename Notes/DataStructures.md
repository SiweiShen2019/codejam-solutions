# Data Structures
## Linear Data Structures
### Static Array
> native support in both C/C++ and Java

- Typically 1D, 2D, and 3D arrays are used.
- Typical array operations:
  - Accessing elements by their indicies.
  - Sorting elements.
  - Performing a linear scan or a binary search on a sorted array.

### Dynamically-Resizeable Array
> C++ STL `vector` (Java `ArrayList` (faster) or `Vector`)

- Better to use a `vector` than an array if size is unknown.
- Initialize the size (`reserve()` or `resize()`) with the estimated size of the collection for better performance.
- Typical C++ STL `vector` operations: `push_back()`, `at()`, the `[]` operator, `assign()`, `clear()`, `erase()`, and `iterators` for traversing the contents of `vector`s.

### Sorting and Searching on arrays
#### Sorting
- $O(n^2)$
  - Bubble Sort: Swap two neighbor elements so that the maximum is set at the end of each iteration.
  - Selection Sort: Select the minimum in the rest of unsorted array in each iteration.
  - Insertion Sort: Each iteration, insert the first unsorted element into the sorted array.
- $O(n log n)$ (default choice)
  - **Merge Sort**: Split -> Sort -> Merge.
  - **Heap Sort**: Use heap's property to sort the array.
  - **Quick Sort**: Sort the left part and the right part of the pivot.
  - C++ STL `algorithm` (Java `Collections.sort`): `sort`, `partial_sort`, `stable_sort`.
- $O(n)$: Counting/Radix/Bucket Sort.

#### Searching
- $O(n)$ Linear Search (avoid this whenever possible)
- $O(log n)$ Binary Search: Sort the array at least once if the array is unsorted. C++ STL `algorithm`: `lower_bound`, `upper_bound`, `binary_search` (Java `Collections.binarySearch`).
- $O(1)$ with Hashing: this technique is rarely used and we can live without it for most (contest) problems.


### Array of Booleans
- C++ STL `bitset` (Java `BitSet`): if our array needs only to contain Boolean values (1/true and 0/false).
  - `reset()`, `set()`, the `[]` operator, and `test()`.


### Bitmasks

### Linked List
> C++ STL `list` (Java `LinkedList`)

- Alyways appear in data structure and algorithm, but usually is avoided in typical contest problem.
- Replaced by C++ STL `vector` (Java `Vector`).


### Stack
> C++ STL `stack` (Java `Stack`)

- $O(1)$ insertion (push) and $O(1)$ deletion (pop) from the top: Last In First Out (LIFO)
- C++ STL `stack`: `push()`/`pop()` (insert/remove from top of stack), `top()` (obtain content from the top of stack), and `empty()`.

### Queue
> C++ STL `queue` (Java `Queue`)

- Used in algorithms like Breadth First Search (BFS).
- $O(1)$ insertion (enqueue) from the back (tail) and $O(1)$ deletion (dequeue) from the front (head): First In First Out (FIFO).
- C++ STL `queue`: `push()`/`pop()` (insert from back/remove from front of queue), `front()`/`back()` (obtain content from the front/back of queue), and `empty()`.

### Double-ended Queue (Deque)
> C++ STL `deque` (Java `Deque`)

- Similar to the resizeable array (vector) and queue above, but with fast $O(1)$ insertions and deletions at *both* the beginning
and the end of the deque.
- C++ STL `deque`: `push back()`, `pop front()` (just like the normal queue), `push_front()` and `pop_back()` (specific for deque).

