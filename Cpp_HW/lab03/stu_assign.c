# include <stdio.h>
int main(){
    int age = 0;
    scanf("%d", &age);
    if(age >=2 && age <= 3){
        printf("L");
    }
    else if(age == 4){
        printf("M");
    }
    else if(age >=5 && age <=6){
        printf("H");
    }
    return 0;
}