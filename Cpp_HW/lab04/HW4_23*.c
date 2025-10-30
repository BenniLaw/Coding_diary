# include <stdio.h>
# define min(a,b) (a < b ? a : b)

int main(){
    int n = 0, pos = 0;
    scanf("%d", &n);
    int lines = 2 * n + 1;
    
    for(int i = 0; i < lines; i++){
        // 先打印space
        int space = min(i, 2 * n - i);  // 对称反射
        for(int j = 0; j < space; j++){
            printf(" ");
        }
        // 再打印数字
        int count = 2 * n + 1 - 2 * space;
        for(int k = 0; k < count; k++){
            int digit = (pos % 9) + 1;  // 用pos实现无限循环
            printf("%d", digit);
            pos++;
        }
        // 换行
        printf("\n");   
    }

    return 0;
}

/*
                行数      数字
12345678912  1 (n+1)+5   1        11%9=2
 345678912   2 (n+1)+4   3        9%9=0
  3456789    3 (n+1)+3   3        7%9=7
   12345     4 (n+1)+2   1
    678      5 (n+1)+1   
     9       6 n+1
    123      7 (n+1)-1
   45678     8 (n+1)-2
  9123456    9 (n+1)-3
 789123456   10 (n+1)-4
78912345678  11 (n+1)-5
            n+1+(n, -n)
*/

/*
伪代码思路
输入 n
总行数 total = 2*n + 1
pos = 0  // 已经输出了多少个数字

for i 从 0 到 total-1:
    spaces = min(i, 2*n - i)
    count = 2*n + 1 - 2*spaces

    打印 spaces 个空格
    打印 count 个数字：
        每个数字 = (pos % 9) + 1
        pos++

    换行
*/

/*
对称反射的思路解析：如何实现先增加后减少
想象有一条线，对称中心在 i = n。
我们希望：

行 i=0 和 i=2n 空格一样多；

行 i=1 和 i=2n-1 空格一样多；

行 i=2 和 i=2n-2 空格一样多；

…

那是不是可以把 i 变成它“从底部看上去的行号”？
底部对应的行号是多少？

👉 反射行号 = 2n - i

因为：

行号 i	对称行号 2n - i
0	10
1	9
2	8
3	7
4	6
5	5
6	4
7	3
8	2
9	1
10	0
*/

