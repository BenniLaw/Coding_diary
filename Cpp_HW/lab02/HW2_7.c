# include <stdio.h>
int main()
{
    int like, ones, tens = 0;
    scanf("%d", &like);
    like *= 3;
    like += 3;
    like *= 3;
    ones = like % 10;
    tens = like / 10 % 10;
    printf("%d", ones + tens);
    return 0;
}