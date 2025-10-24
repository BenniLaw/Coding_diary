# include <stdio.h>
int factorial(int n)
{
    if(n == 1 || n == 0){
        return 1;
    }
    else{
        return n * factorial(n - 1);
    }
}

int main(){
    long sum = 0;
    for(int i = 1; i <= 20; i++){
        sum += factorial(i);
    }
    printf("%d", sum);
    return 0;
}