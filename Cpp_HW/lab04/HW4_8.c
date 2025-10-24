# include <stdio.h>
int main(){
    int x = 0;
    scanf("%d", &x);
    int tmp = x;
    int count = 0;
    int sum = 0;
    while(x > 0){
        x /= 10;
        count++;
    }
    for(int i = 0; i < count; i++){
        sum += tmp % 10;
        tmp /= 10;
    }
    printf("count=%d\n", count);
    printf("sum=%d\n", sum);
    return 0;
}