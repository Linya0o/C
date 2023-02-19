> 除书籍社区给出的题解外，其余为个人所解，仅供参考

## 第 8 章 数组

### 练习题

1. 需要确定数组a具有类型t
2. 假设在ASCII字符集下，a['7'-'0']
3. 略
4. bool weekend[] = { [0] = ture, [6] = ture }
5. ```c
   int fibo_number[40] = { 0, 1, };
   for (int i = 2; i < 40; i++) {
       fibo_number[i] = fibo_number[i-1] + fibo_number[i-2];
   }
   ```
6. 略
7. ```c
   const int segments[10][7] = {
       {1, 1, 1, 1, 1, 1},
       {0, 1, 1},
       {1, 1, 0, 1, 1, 0, 1},
       {1, 1, 1, 1, 0, 0, 1},
       {0, 1, 1, 0, 0, 1, 1},
       {1, 0, 1, 1, 0, 1, 1},
       {1, 0, 1, 1, 1, 1, 1},
       {1, 1, 1},
       {1, 1, 1, 1, 1, 1, 1},
       {1, 1, 1, 1, 0, 1, 1}
   };
   ```
8. `double temperature_readings[30][24] = { 0 };`
9. ```c
   double sum = 0;
   for (int i = 0; i < 30; i++) {
       for (int j = 0; j < 24; j++) {
           sum += temperature_readings[i][j];
       }
   }
   double average_temperature = sum / (30 * 24);
   ```
10. 略
11. ```c
    char checker_board[8][8] = { 0 };
    for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 24; j++) {
            checker_board[i][j] = (i+j) / 2 == 0 ? 'B' : 'R';
        }
    }
    ```

### 编程题
