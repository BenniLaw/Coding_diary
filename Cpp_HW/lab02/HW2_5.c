# include <stdio.h>
int main(){
    int x = 0;
    scanf("%d", &x);
    printf("%d   %d   %d   %d   %d", x / 10000, x / 1000 % 10, x / 100 % 10, x / 10 % 10, x % 10); 
    return 0;
}