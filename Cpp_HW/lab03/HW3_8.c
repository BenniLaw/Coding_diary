# include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int nums[3] = {a, b, c};
    for(int i = 0; i < 3; i++){
        if(nums[i] % 2 != 0){
            printf("%d is odd number!\n", nums[i]);
        }
    }
    return 0;
}