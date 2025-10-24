# include <stdio.h>
int main(){
    double a, b;
    scanf("%lf %lf", &a, &b);
    if(a > b){
        printf("%.2lf", a);
    }
    else{
        printf("%.2lf", b);
    }
    return 0;
}