# include <stdio.h>
# include <math.h>
int main()
{
    double a, b, c, delta, x1, x2;
    scanf("%lf %lf %lf", &a, &b, &c);
    delta = b * b - 4 * a * c;
    x1 = (- b + sqrt(delta)) / (2 * a);
    x2 = (- b - sqrt(delta)) / (2 * a);
    if (x1 >= x2){
        printf("%.2lf %.2lf", x1, x2);
    }
    else{
        printf("%.2lf %.2lf", x2, x1);
    }
    return 0;
}