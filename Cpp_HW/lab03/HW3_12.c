# include <stdio.h>
# include <math.h>

int main(){
    double s = 0, time_fee = 0, total = 0;
    int time = 0;
    scanf("%lf", &s);
    scanf("%d", &time);
    s = ceil(s);

    // 计算时间费用
    if(time >= 5){
        time_fee = ceil(time / 5.0);
    }
    else{
        time_fee = 0;
    }
    
    // 计算总费用
    if(s <= 3){
        total = 10 + time_fee * 2;
    }
    else if(s <= 13){  // 题目是起步里程3后的10公里每公里2元, 所以这里s <= 13
        total = (s - 3) * 2 + 10 + time_fee * 2;
    }
    else{
        total = (s - 13) * 3 + 10 * 2 + 10 + time_fee * 2;
    }
    printf("%.0lf", total);
}