# include <stdio.h>
int main(){
    int B, M;
    double S;
    for(B = 1; B <= 98; B++){
        for(M = 1; M <= 98 - B; M++){
            S = 100 - B - M;
            if(S >= 2 && B * 3 + M * 2 + S / 2 == 100){
                printf("%d %d %.0lf\n", B, M, S);
            }
        }
    }
    return 0;
}