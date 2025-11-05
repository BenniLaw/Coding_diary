# include <stdio.h>
int main(){
    int nums[20] = {0};
    int length = sizeof(nums) / sizeof(nums[0]);
    
    // input
    for(int i = 0; i < length; i++){
        scanf("%d", &nums[i]);  
    }

    // output
    for(int i = 0; i < length; i++){
        for(int j = 0; j < length; j++){
            if(nums[i] % nums[j] == 0 && i != j){  // "其他元素"一开始写的是nums[i] != nums[j], 其实是位置不同, 即i != j
                printf("%d ", nums[i]);
                break;
            }
        }
    }

    return 0;
}