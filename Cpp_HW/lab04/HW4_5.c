# include <stdio.h>
int main(){
    int n = 0;
    double sum = 1;
    scanf("%d", &n);
    for(int i = 2; i <= n; i++){
        if(i % 2 == 0){
            sum += 1.0 / i;
        }
        else{
            sum -= 1.0 / i;
        }
    }
    printf("%.3lf", sum);
    return 0;
}