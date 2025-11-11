#include <stdio.h>
int main(){
    void reverse(int *nums, int length);
    int nums[10] = {3,7,9,11,0,6,7,5,4,2};
    reverse(nums, 10);
    for(int j = 0; j < 10; j++){
        printf("%d ", nums[j]);
    }
}

void reverse(int *nums, int length){
    for(int i = 0; i < length / 2; i++){
        int tmp = *(nums + i);
        *(nums + i) = *(nums + length - 1 - i);
        *(nums + length - 1 - i) = tmp;
    }
}
    


