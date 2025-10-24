# include <stdio.h>
int main(){
    float a;
    char op;
    float b;
    scanf("%f%c%f",&a,&op,&b);
    if(op == '/'){
        if(b == 0){
            printf("error");
            return 0;
        }
    }
    switch(op){
        case '+':
            printf("%.2f", a + b);
            break;
        case '-':
            printf("%.2f", a - b);
            break;
        case '*':
            printf("%.2f", a * b);
            break;
        case '/':
            printf("%.2f", a / b);
            break;
        default:
            printf("error");
            break;
    }
    return 0;
}