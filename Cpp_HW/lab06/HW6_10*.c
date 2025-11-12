# include <stdio.h>
int frog(int n) {
    if (n == 1) {
        return 1;
    }
    else if (n == 2) {
        return 2;
    }
    return frog(n - 1) + frog(n - 2);
}

int main(){
    int n = 0;
    scanf("%d", &n);
    printf("%d", frog(n));
}