# include <stdio.h>
# include <string.h>
int main(){
    char str[100] = {0};
    int i = 0;
    char ch;
    while((ch = getchar()) != '\n' && i < 99){
        str[i] = ch;
        i++;
    }

    int spaces = 0, digits = 0, others = 0;
    for(int j = 0; j < strlen(str); j++){
        if(str[j] == ' '){
            spaces++;
        }
        else if(str[j] >= '0' && str[j] <= '9'){
            digits++;
        }
        else{
            others++;
        }
    }
    printf("%d %d %d", digits, spaces, others);

    return 0;
}