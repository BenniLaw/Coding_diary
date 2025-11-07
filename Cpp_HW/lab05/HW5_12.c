# include <stdio.h>
int main(){
    // input
    int type[3][3] = {0};
    int rows = sizeof(type) / sizeof(type[0]);
    int columns = sizeof(type[0]) / sizeof(int);
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            scanf("%d", &type[i][j]);
        }
    }

    // 主对角线 + 副对角线
    int sum = 0;
    for(int i = 0; i < rows; i++){
        sum += type[i][i];
        sum += type[i][rows - 1 - i];
    }
    sum -= type[1][1];

    //output
    printf("%d", sum);

    return 0;

} 