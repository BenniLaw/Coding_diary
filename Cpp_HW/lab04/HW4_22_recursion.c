# include <stdio.h>

void image(int k){
if(k == 1){
    printf("*\n");
    return;
}    
else{
    for(int i = 0; i < k; i++){printf("*");}
    printf("\n");
    image(k - 1);
    for(int i = 0; i < k; i++){printf("*");}
    printf("\n");
}
}

int main(){
    int k = 0;
    scanf("%d", &k);
    image(k);
    return 0;
}