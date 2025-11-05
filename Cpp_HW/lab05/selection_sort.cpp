# include <stdio.h>
int main(){
    // 声明函数
    void select_sort(int nums[], int length);
    
    // 输入数组
    int nums[10] = {0};
    int length = sizeof(nums) / sizeof(int);
    for(int i = 0; i < 10; i++){
        scanf("%d", &nums[i]);
    } 

    // 选择排序
    select_sort(nums, length);
    select_sort_revise(nums, length);

    // 输出数组
    for(int i = 0; i < 10; i++){
        printf("%d ", nums[i]);
    } 

    return 0;
}

// 选择排序 1.0
void select_sort(int nums[], int length){
    for(int min_index = 0; min_index < length - 1; min_index++){  // 运行 length - 1 趟
        for(int i = min_index + 1; i < length; i++){  // 从 j 比到头
            // 只要记录就交换
            if(nums[i] < nums[min_index]){
                int tmp = nums[i];
                nums[i] = nums[min_index];
                nums[min_index] = tmp;
            }
        }
    }
}

// 选择排序 2.0
void select_sort_revise(int nums[], int length){
    for(int j = 0; j < length - 1; j++){  // 运行 length - 1 趟
        int min_index = j; 
        for(int i = j + 1; i < length; i++){  // 从 j 比到头, 记录最小的位置
            if(nums[i] < nums[min_index]){
                min_index = i;
            }
        }
        // 记录好了再交换
        int tmp = nums[j];
        nums[min_index] = nums[j];
        nums[j] = tmp;
    }
}