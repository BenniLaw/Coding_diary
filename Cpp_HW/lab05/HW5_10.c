# include <stdio.h>
int main(){
    int nums[10] = {0};

    // input
    int length = sizeof(nums) / sizeof(nums[0]);
    for(int i = 0; i < length; i++){
        scanf("%d", &nums[i]);
    }
    
}