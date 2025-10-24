# include <stdio.h>
int main(){
    int x = 0;
    scanf("%d", &x);
    printf("%d", x % 10 * 100 + x / 10 % 10 * 10 + x / 100 % 10);  
    return 0;
}