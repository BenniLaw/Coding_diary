# include <stdio.h>
int main(){
    for(int i = 1; i <= 9; i++){
        int target = i * i;
        if(target % 10 == i){
            printf("%d\n", i);
        }
    }
    for(int i = 10; i <= 99; i++){
        int target = i * i;
        if(target % 100 == i){
            printf("%d\n", i);
        }
    } 
    return 0;
}