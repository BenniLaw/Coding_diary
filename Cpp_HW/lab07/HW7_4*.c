# include <stdio.h>
# include <string.h>

void swap(char *str1, char *str2){
    if(strcmp(str1, str2) > 0){
        char tmp[80] = {0};
        strcpy(tmp, str2);
        strcpy(str2, str1);
        strcpy(str1, tmp);
    }
}

int main(){

    char str1[80] = {0};
    char str2[80] = {0};
    char str3[80] = {0};

    fgets(str1, 80, stdin);
    fgets(str2, 80, stdin);
    fgets(str3, 80, stdin);

    swap(str1, str2);
    swap(str1, str3);
    swap(str2, str3);

    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("%s\n", str3);
}