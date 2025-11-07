# include <stdio.h>
void swap(int *a, int *b){
    if(*a < *b){
        int tmp = *b;
        *b = *a;
        *a = tmp;
    } 
}

void exchange(int *a, int *b, int *c){
    swap(a, b);
    swap(a, c);
    swap(b, c);
}

int main(){
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);
    exchange(&a, &b, &c);
    printf("%d %d %d\n", a, b, c);

    return 0;
}