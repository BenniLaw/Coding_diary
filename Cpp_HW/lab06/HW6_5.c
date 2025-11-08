# include <stdio.h>
int get_max(int *nums, length){
    int max_index = nums;
    for (int i = 0; i < length; i++){
        if (*(nums + i) > max){
            max_index = nums + i;
        }
    }
    return max_index;

}
int main(){
    int nums[8] = {0};
    for (int i = 0; i < 8; i++){
        scanf("%d ", &nums[i]);
    }
    printf("%d", get_max(nums, 8))
}

