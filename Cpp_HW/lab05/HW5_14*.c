#include <stdio.h>

int main(){
    // 定义矩阵 A（3x3）
    int A[3][3] = {
        {7, -5, 3},
        {2, 8, -6},
        {1, -4, -2}
    };

    // 定义矩阵 B（3x3）
    int B[3][3] = {
        {3, 6, -9},
        {2, -8, 3},
        {5, -2, -7}
    };

    // 三重循环计算矩阵乘法 C = A × B
    // 外层循环 i：遍历 A 的行
    for(int i = 0; i < 3; i++){ 
        
        // 中层循环 j：遍历 B 的列
        for(int j = 0; j < 3; j++){
            
            int multiple = 0; // 保存 C[i][j] 的累加结果，初始为 0
            
            // 内层循环 k：按公式累加 A[i][k] * B[k][j]
            for(int k = 0; k < 3; k++){
                multiple += A[i][k] * B[k][j];
                // 对应数学公式：C[i][j] += A[i][k] × B[k][j]
            }

            // 输出当前计算得到的 C[i][j]
            printf("%d ", multiple);
        }

        // 每打印完一行结果，换行
        printf("\n");
    }

    return 0;
}
