# include <stdio.h>
int main(){
    char level;
    double total = 0;
    scanf("%c", &level);
    scanf("%lf", &total);
    if(level == 'P'){
        if(total >= 100){
            total *= 0.9;
        }
    }
    else{
        if(total < 1000){
            total *= 0.8;
        }
        else{
            total *= 0.7;
        }
    }
    printf("%.2lf", total);
    return 0;
}