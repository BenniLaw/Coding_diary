# include <stdio.h>
int main(){
    
    int loc = 0;
    scanf("%d", &loc);
    if(loc <= 3){
        printf("1\n");  //printf() 的第一个参数必须是一个 字符串格式
    }

    int a1 = 1, a2 = a1, a3 = a1;
    int current = 0;
    for(int i = 4; i <= loc; i++){
        current = a1 + a2 + a3;
        a1 = a2;
        a2 = a3;
        a3 = current;
    }

    printf("%d", current);
    return 0;
}
