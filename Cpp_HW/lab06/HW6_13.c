# include <stdio.h>
void selection_sort(int *nums, int length){
    for (int j = 0; j < length - 1; j++) {
        int min_index = j;
        for (int k = j + 1; k < length; k++) {
            if (nums[min_index] > nums[k]) {
                min_index = k;
            }
        } 
        // swap
        int tmp = nums[min_index];
        nums[min_index] = nums[j];
        nums[j] = tmp;
    }
}
int main(){
    // input
    int nums[10] = {0};
    for (int i = 0; i < 10; i++) {
        scanf("%d", nums + i);
    }

    // sort
    selection_sort(nums, 10);

    // output
    for (int j = 0; j < 10; j++) {
        printf("%d ", nums[j]);
    }
}