# include <stdio.h>
int main(){
    for(int i = 500; i <= 1000; i++){
        if(i % 5 == 3 && i % 7 == 6 && i % 11 == 4){
            printf("%d\n", i);
        }
    }
    return 0;
}