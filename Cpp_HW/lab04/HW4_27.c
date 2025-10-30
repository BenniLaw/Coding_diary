# include <stdio.h>
int main(){
    int a1 = 1, a2 = a1, a3 = a1;
    int loc = 0, target = 0;
    scanf("%d", &loc);
    for(int i = 0; i < loc - 3; i++){
        target = a1 + a2 + a3;
        a1 = a2;
        a2 = a3;
        a3 = target;
    }
    printf("%d", target);
    return 0;
}
