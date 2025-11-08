# include <stdio.h>

void max(int a, int b){
    printf("%d", a > b ? a : b);
}

int main(){
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    max(a, b);

    return 0;
}