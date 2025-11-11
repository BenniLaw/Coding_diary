# include <stdio.h>
int main(){
    int month_index = 0;
    scanf("%d", &month_index);
    char *month[] = {"January", "Febreury", "March", "April", "May", "June", "July", "Augest", "September", "October", "November", "December"};
    
    if (month_index > 12 || month_index < 1) {
        printf("Wrong!");
        return 0;
    }
    else{
        printf("%s", month[month_index - 1]);
    }

    return 0;
}