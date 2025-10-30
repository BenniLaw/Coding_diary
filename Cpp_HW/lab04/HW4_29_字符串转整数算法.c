# include <stdio.h>
# include <stdlib.h>
int main(){
    int year = 0, month = 0, day = 0;
    scanf("%d %d %d", &year, &month, &day);

    // 实现字符串转整数
    char chs[9];
    sprintf(chs, "%04d%02d%02d", year, month, day);   
    int target = atoi(chs);
    
    // 判断素数
    for(int i = 2; i * i <= target; i++){
        if(target % i == 0){
            printf("n");
            return 0;
        }
    }
    printf("y");
    return 0;
}