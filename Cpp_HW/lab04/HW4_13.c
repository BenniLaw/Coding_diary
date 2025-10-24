# include <stdio.h>
int main(){
    int nature = 0, count = 0;
    scanf("%d", &nature);
    while(nature > 1){
        if(nature % 2 == 0){
            nature /= 2;
            count++;
        }
        else{
            nature = nature * 3 + 1;
            count++;
        }
    }
    printf("%d", count);
    return 0;
}