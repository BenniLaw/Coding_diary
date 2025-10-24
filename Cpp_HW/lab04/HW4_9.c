# include <stdio.h>
int main(){
    int x = 0;
    scanf("%d", &x);
    for(int i = 2; i <= x / i; i++){
        if(x % i == 0){
            printf("n");
            return 0;
        }
    }
    printf("y");
    return 0;
}