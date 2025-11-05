# include <stdio.h>
void bubble_sort(int * arr, int length){
 
    for(int i = 0; i < length; i++){  // 第 i 趟
        for(int j = 0; j < length - i - 1; j++){  // j是我们要拿来做比较的数, 最后一个数不用拿来比, 不然会越界
            if(arr[j] > arr[j + 1]){
                int tmp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = tmp;
            }  // 交换
        }
    } 

    for(int i = 0; i < length; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int arr[10] = {0};
    int length = sizeof(arr) / sizeof(arr[0]);  // 注意不可以在函数内求长度, 因为传进去的数组不得不变成指向第一个元素地址
    for(int i = 0; i < length; i++){
        scanf("%d", &arr[i]);
    }
    bubble_sort(arr, length);
    return 0;
}