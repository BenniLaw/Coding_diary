# include <stdio.h>
int main(){
    double a, b, c, max;
    scanf("%lf %lf %lf", &a, &b, &c);
    max = a;
    if(b > max){
        max = b;
    }
    if(c > max){
        max = c;
    }
    printf("%.2lf\n", max);
}