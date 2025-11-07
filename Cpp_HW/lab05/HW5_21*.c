# include <stdio.h>
# include <string.h>
# include <math.h>

int main(){
    char str[20] = {0};
    scanf("%s", str);
    
    int total = 0;
    // for(int i = strlen(str) - 1; i >= 0; i--){
    //     total += (int)(str[i] - '0') * pow(10, strlen(str) - i - 1) ; 
    // }

    for(int i = 0; i < strlen(str); i++){
        total = total * 10 + (str[i] - '0');  // 不用强制转换了
    }

    printf("%d", total * 2);
}