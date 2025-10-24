# include <stdio.h>
int main(){
    double F;
    scanf("%lf", &F);
    printf("c=%.2lf", 5 * (F - 32) / 9);
    return 0;
}