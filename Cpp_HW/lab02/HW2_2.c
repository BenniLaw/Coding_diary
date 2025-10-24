# include <stdio.h>
# include <math.h>
int main(){
    double outter, inner;
    double density =  11340;
    double pi = 3.1415926;
    double weight;
    double volume;

    scanf("%lf %lf", &outter, &inner);
    volume = ((4.0 / 3) * pi * pow((outter / 2) / 100, 3)) - ((4.0 / 3) * pi * pow((inner / 2) / 100, 3));  
    weight = density * volume;
    printf("%lf", weight);
    return 0;
}