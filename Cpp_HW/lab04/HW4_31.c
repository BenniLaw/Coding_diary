# include <stdio.h>
int main(){
    int a = 0, n = 0, Sn = 0, sum = 0;
    scanf("%d\n%d", &a, &n);

    for(int i = 0; i < n; i++){
        Sn = Sn * 10 + a;
        sum += Sn;
    }
    
    printf("%d", sum);
    return 0;
}