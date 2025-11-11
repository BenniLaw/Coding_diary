# include <stdio.h>

int get_max(int a, int b){
    return (a > b ? a : b);
}

int get_min(int a, int b){
    return (a < b ? a : b);
}

int get_sum(int a, int b){
    return a + b;
}

int main(){
    int a = 34;
    int b = -21;
    int choose = 0;
    int (*p)(int a, int b);
    scanf("%d", &choose);
    if (choose == 1){
        p = get_max;
    }
    else if (choose == 2){
        p = get_min;
    }
    else{
        p = get_sum;
    }
    printf("%d", p(a, b));

    return 0;
}