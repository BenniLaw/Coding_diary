# include <stdio.h>
# include <math.h>
int main(){
    double hours;
    int fee = 0;
    scanf("%lf", &hours);
    int new_hours = (int)ceil(hours);  //C 语言不允许在同一个作用域内用不同类型重新定义同一个变量名。
    if(new_hours <= 10){
        fee = 30;
    }
    else if(new_hours > 10 && new_hours <= 50){
        fee = (new_hours - 10) * 3 + 30;
    }
    else{
        fee = (new_hours - 50) * 2 + 40 * 3 + 30;
    }

    printf("%d", fee);
    return 0;
}

// 取整!ceil, floor, 直接int是向0取整
// 如何不用ceil实现向上取整

// ✅ 方法：利用整数除法和取模（适用于正数）
// 对于 正实数 x，向上取整等价于：

// int ceil_val;
// if (x == (int)x) {
//     ceil_val = (int)x;         // 恰好是整数，直接取
// } else {
//     ceil_val = (int)x + 1;     // 有小数部分，加 1
// }

// 或者更简洁地（利用布尔表达式）：
// int ceil_val = (int)x + (x > (int)x);
// 因为 (x > (int)x) 在有小数时为 1，否则为 0。