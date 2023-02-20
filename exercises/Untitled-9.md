> 除书籍社区给出的题解外，其余为个人所解，仅供参考

## 第 9 章 数组

### 练习题

1. ```c
   double triangle_area(base, height)
   double base, height;
   {
       double product = base * height;
       return product / 2;
   }
   ```
2. ```c
   bool check(int x, int y, int n) {
       return x >= 0 && x <= n-1 && y >= 0 && y <= n-1 ? true : false;
   }
   ```
3. ```c
   int gcd(int m, int n) {
       int remainder = 0;
       while (n != 0) {
           remainder = m % n;
           m = n;
           n = remainder;
       }
   }
   ```
