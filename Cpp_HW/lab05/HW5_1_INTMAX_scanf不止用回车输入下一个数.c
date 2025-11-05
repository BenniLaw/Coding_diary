# include <stdio.h>
# include <limits.h>
# include <stdlib.h>

int main(){
    int nums[10] = {0};
    int length = sizeof(nums) / sizeof(nums[0]);
    int MIN = INT_MAX;
    int re = 0;
    for(int i = 0; i < length; i++){
        scanf("%d", &nums[i]);  // 用 scanf("%d", &x) 读取整数时，输入之间用空格、回车、Tab 都可以分隔数据，不需要在格式字符串里加空格。
        if(abs(nums[i]) <= MIN){
            MIN = abs(nums[i]);
            re = nums[i];
        }
    }
    printf("%d", re);
    return 0;
}