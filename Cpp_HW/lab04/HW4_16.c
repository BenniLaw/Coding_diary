# include <stdio.h>
int main(){
    int nature = 0, count = 0, max = 0;
    scanf("%d", &nature);
    while(nature > 1){
        if(nature % 2 == 0){
            nature /= 2;
            if(nature > max){
                max = nature;
            }
        }
        else{
            nature = nature * 3 + 1;
            if(nature > max){
                max = nature;
            }
        }
    }
    printf("%d", max);
    return 0;
}