# include <stdio.h>
int main(){
    // input
    int nums[10] = {0};
    int length = sizeof(nums) / sizeof(int);
    for(int i = 0; i < length; i++){
        scanf("%d", &nums[i]);
    }

    // output
    int *p = nums;
    for(int j = 0; j < length; j++){
        printf("%d ", *(p + j));        
    }

    return 0;
}