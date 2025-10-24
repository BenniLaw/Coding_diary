#include<stdio.h>
#include<math.h>
int main()
{
    double pi = 3.1415926;
    double x;
    double weight;
    double volume;
    scanf("%lf", &x);
    volume = (4.0 / 3) * pi * pow((x/2) / 100, 3);  
    // 注意这里是小数除法, 不能用4 / 3
    weight = 11340 * volume;
    printf("%lf", weight);
    return 0;
}