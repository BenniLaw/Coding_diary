# include <stdio.h>
int main(){
    double M = 0;
    int N = 0;
    scanf("%lf %d", &M, &N);

    double sum = 0;
    sum -= M;
    for(int i = 0; i < N; i ++){
        sum += (2 * M);
        M /= 2.0;
    }

    printf("%.2lf %.2lf\n", M, sum);
    return 0;
}
