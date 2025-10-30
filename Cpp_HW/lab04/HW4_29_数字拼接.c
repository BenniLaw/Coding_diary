# include <stdio.h>
# include <stdlib.h>
int main(){
    int year = 0, month = 0, day = 0;
    scanf("%d %d %d", &year, &month, &day);

    // 数字拼接
    int target = year * 10000 + month * 100 + day;

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