# include <stdio.h>
int main(){
    double scores[4][5] = {
        {83.00, 90.00, 86.00, 93.00, 0},
        {95.00, 78.00, 80.00, 90.00, 0},
        {64.00, 82.00, 74.00, 88.00, 0},
        {0, 0, 0, 0, 0}
    };

    for(int i = 0; i < 3; i++){
        double columns = 0;
        for(int j = 0; j < 4; j++){
            columns += scores[i][j];
        }
        scores[i][4] = columns / 4;
    }

    
    for(int j = 0; j < 4; j++){
        double rows = 0;
        for(int i = 0; i < 3; i++){
            rows += scores[i][j];
        }
        scores[3][j] = rows / 3;
    }

    double total = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            total += scores[i][j];
        }
    }
    scores[3][4] = total / 12;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            printf("%.2lf\t", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}