# include <stdio.h>
void gcd_lcm(int a, int b){
    int gcd = 0, lcm = 0;
    for(int i = 1; i <= a; i++){
        if(a % i == 0 && b % i == 0){
            gcd = i;
        }
    }
    lcm = a * b / gcd;
   
    printf("%d %d", gcd, lcm);
}

int main(){
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    gcd_lcm(a, b);
    return 0;
}