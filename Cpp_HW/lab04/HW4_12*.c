# include <stdio.h>
int main(){
    int a, b, tmp;
    int count = 0;
    scanf("%d %d", &a, &b);
    if(a > b){
        tmp = a;
        a = b;
        b = tmp;
    }

    for(int i = a; i <= b ; i++){
        if(i < 2){
            continue;  //1直接跳过
        }
        int flag = 1;  // flag每次都要重复定义
        for(int j = 2; j <= i / j; j++){
            if(i % j == 0){
                flag = 0;
                break;
            }
        }
        if(flag){
            count++;
        }
    }
    printf("%d", count);
}