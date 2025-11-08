# include <stdio.h>
# include <string.h>

int main(){
    char a[100] = {0};
    fgets(a, 99, stdin);
    char b[100] = {0};
    strcpy(b, a);
    printf("%s", b);
}