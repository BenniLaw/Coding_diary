# include <stdio.h>

void add(double a, double b){
    printf("%.2lf", a + b);
}

int main(){
    double a = 0, b = 0;
    scanf("%lf %lf", &a, &b);
    add(a, b);

    return 0;
}