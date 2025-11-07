//StudybarCommentBegin
#include<stdio.h>
int main()
{
	void in_num(int *x);
	void exchange(int *x);
	void out_num(int *x);
	int x[10];
	in_num(x);
	exchange(x);
	out_num(x);
	return 0;
}
//StudybarCommentEnd

void in_num(int *x){
    for(int i = 0; i < 10; i++){
        scanf("%d", &x[i]);
    }
}
    
void exchange(int *x){
    int max = 0;
    for(int i = 0; i < 10; i++){
        if(x[i] > x[max]){
            max = i;
        }
    }
    int tmp = x[9];
    x[9] = x[max];
    x[max] = tmp;

    int min = 0;
    for(int j = 0; j < 10; j++){
        if(x[j] < x[min]){
            min = j;
        }
    }
    tmp = x[0];
    x[0] = x[min];
    x[min] = tmp;
}

void out_num(int *x){
    for(int i = 0; i < 10; i++){
        printf("%d ", x[i]);
    }
}
