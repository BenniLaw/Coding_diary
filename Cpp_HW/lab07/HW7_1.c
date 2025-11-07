# include <stdio.h>
int main(){
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);

    int *pa = &a;
    int *pb = &b;
    if(*pa < *pb){
        int *tmp = pb;
        pb = pa;
        pa = tmp;
    }
    printf("%d %d", *pa, *pb);
}