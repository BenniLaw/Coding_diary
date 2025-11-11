# include <stdio.h>
int get_max(int *nums, int length){
    int max_index = 0;
    for (int i = 1; i < length; i++){
        if (*(nums + i) > *(nums + max_index)){
            max_index = i;
        }
    }
    return max_index;

}
int main(){
    int nums[8] = {0};
    for (int i = 0; i < 8; i++){
        scanf("%d", &nums[i]);
    }
    printf("%d", nums[get_max(nums, 8)]);
}

