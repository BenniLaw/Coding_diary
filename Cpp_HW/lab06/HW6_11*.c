# include <stdio.h>
# include <math.h>
int sup_frog(int n) {
    return pow(2, n - 1);
}

int main() {
    int n = 0;
    scanf("%d", &n);
    printf("%d", sup_frog(n));
}