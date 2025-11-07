# include <stdio.h>
void exchange(int *a, int *b){
    if(*a < *b){
        int tmp = *b;
        *b = *a;
        *a = tmp;
    } 
}
int main(){
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    exchange(&a, &b);
    printf("%d %d\n", a, b);

    return 0;
}