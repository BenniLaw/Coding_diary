# include <stdio.h>
int main(){
    // input
    int nums[100] = {0};
    int count = 0;  // 数组真实长度
    for (int i = 0; i < 100; i++){
        scanf("%d", nums[i]);
        count++;
    }

    // 反转一半的数
    for (int j = 0; j < count / 2; j++){
        int tmp = nums[j];
        nums[count - 1 - j] = tmp;
        nums[count - 1 - j] = nums[j];
    }

    // output
    for (int k = 0; k < count; k++){
        printf("%d ", nums[k]);
    }

    return 0;
    
    
   
}