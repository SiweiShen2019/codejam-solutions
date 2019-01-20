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
