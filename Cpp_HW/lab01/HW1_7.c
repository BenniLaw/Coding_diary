# include <stdio.h>
# include <math.h>
int main(){
    int n = 10;
    double r = 0.1;
    double p = pow(1 + r, n);
    printf("%lf", p);
    return 0;
}

