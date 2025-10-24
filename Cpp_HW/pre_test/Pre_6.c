# include <stdio.h>
int main(){
    int x, a, b;
    scanf("%d\n%d\n%d", &x, &a, &b);
    int tmp = x;
    if(x >= a + b){
        x = x - a - b;
    }
    else if(x < a + b){
        if(x >= b){
            x -= b;
        }
        else if(x >= a){
            x -= a;
        }
        
    }
    
    if(x == tmp){
        printf("小宫今天要饿肚子了");
    }
    else{
        printf("%d", x);
    }
    return 0;
}