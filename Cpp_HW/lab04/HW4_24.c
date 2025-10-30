# include <stdio.h>
# define max(a, b)(a > b ? a : b)

int main(){
    int pos = 0;
    for(int i = 0; i <= 17; i++){  // 行数
        // 打印空格
        int spaces = max(i, 16 - i) / 2;
        for(int j = 0; j < spaces; j++){
            printf("*");
        }

        // 打印字母
        int count = 0;
        count = 19 -  2 * spaces;
        for(int k = 0; k < count; k++){
            char letter = (pos % 26) + 'A';
            printf("%c", letter);
            pos++;
        }

        // 打印空格
        int spaces2 = 19 - count - spaces;
        for(int l = 0; l < spaces2; l++){
            printf("*");
        }   

        printf("\n");
    }
    return 0;
}


