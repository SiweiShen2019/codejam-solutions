# Basics

## Standard Input/Output
### `include <iostream>`
- Input
  - `cin >> a >> b`
  - `cin.getline(char_array, 10)`
  - `getline(cin, str)`
- Output
  - `cout << str << endl`

### `include <stdio.h>`
- Input
  - `scanf("%d", &n)`
- Output
  - `printf("%d\n", a)`

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

## Data Types
### Integers
- `long`
  - range: 10^9
  - scanf & printf: `%ld`
- `long long`
  - used for manipulating `long` in case of overflow
  - scanf & printf: `%lld`
- `size_t`
  - scanf & printf: `%ld`
- modules and integer division
  ```cpp
  143 / 10 // 14
  143 % 10 // 3
  17 / 8 // 2

  -7 / 3 // -2
  -2 * 3 // -6
  -7 % 3 // -1

  7 / -3 // -2
  -2 * -3 // 6
  7 % -3 // 1

  // to act a%b like Python
  (b + (a%b)) % b
  ```
- Conversion
  - char digit to digit: `(int)char - 48`
  - int to char (ascii)
    - A-Z: 65-90
    - a-z: 97-122

### Characters
- Check
  ```cpp
  #include <ctype.h>

  isalpha(a);
  isalnum(b);
  isdigit(c);
  islower(d);
  isupper(e);
  ```

### String
- Conversion
  - string to int (including negative values): `stoi(s)`
