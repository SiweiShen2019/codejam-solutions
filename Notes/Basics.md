# Basics
## Standard Input/Output

### Multiple Test Cases
- The number of test cases is given in the first line of the input.
```cpp
int TC;
scanf("%d", &TC); // number of test cases
while (TC--) { // shortcut to repeat until 0
  // other codes
}
```

- The multiple test cases are terminated by special values (usually zeroes).
```cpp
int a, b; // each line contains two values
// stop when both integers are 0
while (scanf("%d %d", &a, &b), (a || b)) {
  // other codes
}
```

- The multiple test cases are terminated by the EOF (end-of-file) signal.
```cpp
int a, b;
// scanf returns the number of items read
while (scanf("%d %d", &a, &b) == 2) {
  // or you can check for EOF, i.e.
  // while (scanf("%d %d", &a, &b) != EOF)
  // other codes
}
```

### Case Numbers and Blank Lines
- A blank line after each test case.
```cpp
int a, b, c = 1;
while (scanf("%d %d", &a, &b) != EOF)
  printf("Case %d: %d\n\n", c++, a + b);
```

- Blank lines only between test cases.
```cpp
int a, b, c = 1;
while (scanf("%d %d", &a, &b) != EOF) {
  if (c > 1) printf("\n"); // 2nd/more cases
  printf("Case %d: %d\n", c++, a + b);
}
```

- Variable Number of Inputs
```cpp
int k, ans, v;
while (scanf("%d", &k) != EOF) {
  ans = 0;
  while (k--) {
    scanf("%d", &v);
    ans += v;
  }
  printf("%d\n", ans);
}
```

### Practice
#### Super Easy
- [UVa 11172 - Relational Operators](ACM/uva11172.cpp) (ad hoc, very easy, one liner)
- [UVa 11498 - Division of Nlogonia](ACM/uva11498.cpp) (just use if-else statements)
- [UVa 11727 - Cost Cutting](ACM/uva11727.cpp) (sort the 3 numbers and get the median)
#### Easy
- [UVa 10114 - Loansome Car Buyer](ACM/uva10114.cpp) (just simulate the process)
  - Understand the question.
  - Use of `unordered_map`.
  - "0 months" vs "0 month".
- [UVa 11559 - Event Planning](ACM/uva11559.cpp) (one linear pass)
  - Scan variable number of numbers in the same line.
- [UVa 11799 - Horror Dash](ACM/uva11799.cpp) (one linear scan to find the max value)
