# include <stdio.h>
# include <stdlib.h>

int main(){
    // input
    int length = 0, target = 0;
    scanf("%d,%d", &length, &target);

    int *nums = (int*)malloc(length * sizeof(int));  // 动态内存分配
    if (nums == NULL) {
        printf("内存分配失败！\n");
        return 1;
    }

    for(int i = 0; i < length; i++){
        scanf("%d,", &nums[i]);  // 要保证scanf的输入格式
    }

    for(int i = 0; i < length - 1; i++){  // 最后一个数不用操作, 所以只算length - 1 趟
        for(int j = i + 1; j < length; j++){  // 从比 i 大一个的开始加, 加完剩下的所有数
            if(nums[i] + nums[j] == target){
                printf("%d,%d", i, j);
                return 0;
            }
        }
    } 
    printf("-1");
    free(nums);
    return 0;
}