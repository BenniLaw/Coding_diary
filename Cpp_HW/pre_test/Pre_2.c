# include <stdio.h>

int main(){
    double pi = 3.14;
    double r = 0;
    scanf("%lf", &r);
    double c = 2 * pi * r;
    double s = pi * r * r;
    printf("%.2lf %.2lf", c, s);
    return 0;
}