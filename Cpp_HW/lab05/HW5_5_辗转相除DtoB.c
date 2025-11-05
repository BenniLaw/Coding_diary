# include <stdio.h>
int main(){
    int bi[8] = {0};
    int length = sizeof(bi) / sizeof(bi[0]);
    int integer = 0;
    scanf("%d", &integer);
    
    // 辗转相除存入数组
    int i = 0;
    while(integer > 0){
        bi[i] = integer % 2;
        integer /= 2;
        i++;
    }

    // reverse后放入新数组
    int bi_reversed[8] = {0};
    for(int j = 0; j < length; j++){
        bi_reversed[length - 1 - j] = bi[j];
    }

    // 打印新数组
    for(int j = 0; j < length; j++){
        printf("%d", bi_reversed[j]);
    }

    return 0;
}
