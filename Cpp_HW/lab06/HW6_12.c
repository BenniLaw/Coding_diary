# include <stdio.h>
int route(int start, int end) { 
    if (end - 1 == start) {
        return 1;
    }
    else if (end - 2 == start) {
        return 2;
    }
    return route(start, end - 1) + route(start, end - 2);
}
int main(){
    int start = 0;
    int end = 0;
    scanf("%d %d", &start, &end);
    printf("%d", route(start, end));
}