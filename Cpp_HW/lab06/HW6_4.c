# include <stdio.h>
int prime(int even){
    for (int i = 2; i * i <= even; i++){
        if (even % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int even = 0;
    scanf("%d", &even);

    if (even % 2 != 0 || even < 6){
        printf("Input an even num (>=6)");
        return 0;
    }
    else {
        
            for (int k = 2; k < even; k++){
                if (prime(k)){                
                    if (prime(even - k)){
                        printf("%d+%d", k, even - k);
                        return 0;
                    }        
                }
            }
    }
}

