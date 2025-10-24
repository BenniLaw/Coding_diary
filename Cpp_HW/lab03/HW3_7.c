# include <stdio.h>
int main(){
    int score = 0;
    scanf("%d", &score);
    if(score >= 90){
        printf("%d belongs to A.", score);
    }
    else if(score < 60){
        printf("%d belongs to C.", score);
    }
    else{
        printf("%d belongs to B.", score);
    }

    return 0;
}