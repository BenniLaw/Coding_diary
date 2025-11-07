# include <stdio.h>
# include <string.h>
int main(){
    // input
    char str1[20] = {0};
    char str2[20] = {0};
    scanf("%s %s", str1, str2);
    
    // 求str1和str2的长度
    int length1 = strlen(str1);
    int length2 = strlen(str2);
    
    // 把str2放在str1后面
    for(int i = 0; i < length2; i++){
        str1[length1 + i] = str2[i]; 
    }

    // 更新str1的长度
    length1 = strlen(str1);

    // output
    for(int j = 0; j < length1; j++){
        printf("%c", str1[j]);
    }

    return 0;
}