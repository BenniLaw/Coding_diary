# include <stdio.h>

void toBinary(int integer, int bits){
    if(bits == 0){
        return;
    }
    else{
        toBinary(integer / 2, bits - 1);
        printf("%d", integer % 2);
    }
}

int main(){
    int integer = 0;
    int bits = 8;
    scanf("%d", &integer);
    
    toBinary(integer, bits);
    return 0;
}

