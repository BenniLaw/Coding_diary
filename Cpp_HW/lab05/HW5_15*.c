# include <stdio.h>
int main(){
    int triangle[10][10] = {0};
    triangle[0][0] = 1;
    triangle[1][0] = 1;
    triangle[1][1] = 1;
    for(int i = 2; i < 10; i++){
        for(int j = 0; j <= i; j++){
            // if(j == 0){
            //     triangle[i][0] = 1;
            // }
            // else if(triangle[i - 1][j] != 0){
            //     triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            // }
            // else{
            //     triangle[i][j] = 1;
            // }


            //  更新逻辑:
            // 第一个数和最后一个数直接为1
            if(j == 0 || j == i){
                triangle[i][j] = 1;  
            }
            // 其他的数才计算, 而不是如上判断一下上方不为0才不计算, 因为0本身不在杨辉三角的逻辑中, 这样不太好
            else{
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
            // 如果是这样的话也没有必要初始化
            // triangle[0][0] = 1;
            // triangle[1][0] = 1;
            // triangle[1][1] = 1;
            // 这样就可以直接 for(int i = 0; i < 10; i++){}, 有j控制每行有几个, 第一行0, 第二行1, 可以直接走第一个if初始化为1
            
        }
        
    }
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(triangle[i][j] != 0){
                printf("%d\t", triangle[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}