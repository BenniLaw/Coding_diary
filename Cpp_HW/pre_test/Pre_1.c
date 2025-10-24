# include <stdio.h>
# include <math.h>
int main(){
    int a, b, c, n;
    scanf("%d %d %d %d", &a, &b, &c, &n);
    double sum = pow(a, n) + pow(b, n) + pow(c, n);
    printf("%.6lf", sum);
}