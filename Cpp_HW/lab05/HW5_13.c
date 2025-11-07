# include <stdio.h>
int main(){
    int type[3][4] = {0};
    int rows = sizeof(type) / sizeof(type[0]);
    int columns = sizeof(type[0]) / sizeof(int);
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            scanf("%d", &type[i][j]);
        }
    }

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            if(type[i][j] < 0){
                printf("%d %d %d", i + 1, j + 1, type[i][j]);
                return 0;
            }
        }
    }
}