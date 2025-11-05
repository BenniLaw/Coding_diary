# include <stdio.h>
int main(){
    int nums[10] = {0};
    for(int i = 0;;i++){
        scanf("%d", nums[i]);

    }
    return 0;
}


// 方法一: 动态数组

// 方法二: 不用动态数组, 用 fgets() + strtok() 来分割字符串, 最后统计有几个数