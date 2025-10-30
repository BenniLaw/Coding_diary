# include <stdio.h>
# define MAX(a, b)((a) > (b) ? (a) : (b))

int main(){
    int x1 = 0, x2 = 0;
    scanf("%d %d", &x1, &x2);
    int gcd = 0, lcm = 0;

    // 求最大公约数
    for(int i = 1; i <= MAX(x1, x2); i++){
        if(x1 % i == 0 && x2 % i == 0){
            gcd = i;
        }
    }

    // 求最小公倍数
    lcm = x1 * x2 / gcd;

    printf("%d %d", gcd, lcm);
    return 0;
}