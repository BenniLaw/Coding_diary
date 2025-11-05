# include <stdio.h>

int main(){
    int nums[10] = {0};
    int length = sizeof(nums) / sizeof(nums[0]);
    double avg = 0;  // 求avg用double更好
    int count = 0;
    
    // input
    for(int i = 0; i < length; i++){
        scanf("%d", &nums[i]);  
    }

    // computing avg
    for(int i = 0; i < length; i++){
        avg += nums[i];
    }
    avg /= length;  // 只要参与运算的至少一方是浮点数（float / double），运算结果就会是浮点除法（不会截断）。即使这个浮点数“看起来像整数”（比如 5.0）, 它仍然是 double 类型，计算时不会丢小数部分。

    // count target
    for(int i = 0; i < length; i++){
        if(avg < nums[i]){
            count++;
        }
    }

    printf("%d", count);
    return 0;
}