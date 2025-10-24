# include <stdio.h>
int main(){
    int n, m, j;
    scanf("%d %d", &n, &m);
    // n总头数; m总脚数;i鸡数; j兔数
    for(int i = 1; i <= n; i++){
        j = n - i;
        if(i * 2 + j * 4 == m && i){
            printf("%d %d", i, j);
        }
    }
    return 0;
}