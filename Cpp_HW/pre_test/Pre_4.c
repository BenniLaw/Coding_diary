# include <stdio.h>
int main(){
    int h, m, s;
    scanf("%d %d %d", &h, &m, &s);
    if(s == 59){
        s = 0;
        if(m == 59){
            m = 0;
            if(h == 23){
                h = 0;
            }
            else{
                h += 1;
            }
        }
        else{
            m += 1;
        }
    }
    else{
        s += 1;
    }
    printf("%d:%d:%d", h, m, s);
}
