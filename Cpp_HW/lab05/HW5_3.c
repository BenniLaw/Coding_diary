# include <stdio.h>
int main(){
    int fib[20] = {0};
    int length = sizeof(fib) / sizeof(fib[0]);
    
    // input
    fib[0] = 1;
    fib[1] = 1;
    for(int i = 2; i < length; i++){
        fib[i] = fib[i - 1] + fib[i - 2];  
    }

    // output
    for(int i = 0; i < length; i++){
        if(i % 5 == 0 && i != 0){
            printf("\n");
        }
        printf("%12d", fib[i]);
    }

    return 0;
}