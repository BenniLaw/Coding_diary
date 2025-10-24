# include <stdio.h>
int main(){
    for(int i = 100; i < 1000; i++){
        int ones = i % 10;
        int tens = i / 10 % 10;
        int hundreds = i / 100;
        if(ones * ones * ones + tens * tens * tens + hundreds * hundreds * hundreds == i){
            printf("%d\n", i);
        }
    }
    return 0;
}