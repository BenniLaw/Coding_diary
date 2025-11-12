double fact(int n) {
    if (n == 1) {
        return 1;
    }
    return fact(n - 1) * n;
}

double mypow(double x, int n) {
    double total = 1;
    for (int i = 0; i < n; i++) {
        total *= x;
    }
    return total;
}


//StudybarCommentBegin
#include<stdio.h>
int main()
{
	double equation(double x,int n);
	int n;
	double x;
	scanf("%lf%d",&x,&n);
	printf("%.4f\n",equation(x,n));
	return 0;
}
//StudybarCommentEnd

double equation(double x,int n) {
    double sum = 0;
    for (int i = 1; i < n + 1; i++) {
        if (i % 2 == 0) {
            sum -= mypow(x, i) / fact(i);
        }
        else {
            sum += mypow(x, i) / fact(i);
        }  
    }
    return sum;
}