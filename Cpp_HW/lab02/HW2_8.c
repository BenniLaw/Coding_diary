# include <stdio.h>
int main()
{
    char pw[] = "China";
    int i;
    for(i = 0; i < sizeof(pw) - 1; i++){
        pw[i] += 4;
    }
    printf("%s", pw);
    return 0;
}