# include <stdio.h>
int main(){
    int N = 0;
    scanf("%d", &N);
    int x = 0;
    while(x <= N){
        if(x * x % 391 == 13){
            printf("%d ", x);
        }
        x++;
    }
    return 0;
}