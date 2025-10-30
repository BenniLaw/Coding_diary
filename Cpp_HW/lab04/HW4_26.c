# include <stdio.h>
int main(){
    int sum = 0, added = 1;
    while(added <= 2021){
        sum += added;
        added += 20;
    }
    printf("sum=%d", sum);
    return 0;
}