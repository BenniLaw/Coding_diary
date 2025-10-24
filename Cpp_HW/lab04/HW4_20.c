# include <stdio.h>
int main(){
    int rooster, hen;
    double chick;
    for(rooster = 0; rooster <= 100; rooster++){
        for(hen = 0; hen <= 100; hen++){
            chick = 100 - rooster - hen;
            if(rooster * 5 + hen * 3 + chick / 3 == 100){
                printf("%d %d %.0lf\n", rooster, hen, chick);
            }
        }
    }
    return 0;
}