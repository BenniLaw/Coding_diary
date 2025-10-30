#include <stdio.h>

#define max(a, b) (((a) > (b)) ? (a) : (b))

int main(void) {
    int n = 8;
    int rows = 2 * n + 1;
    int totalWidth = 19;  // 你可调整为实际观察的宽度
    int pos = 0;

    for (int i = 0; i < rows; i++) {
        int spaces = max(i, 2 * n - i);
        int count = totalWidth - 2 * spaces;

        // 左填充 “+”
        for (int j = 0; j < spaces; j++) {
            printf("+");
        }

        // 中间字母
        for (int j = 0; j < count; j++) {
            char letter = 'A' + (pos % 26);
            printf("%c", letter);
            pos++;
        }

        // 右填充 “+”
        for (int j = 0; j < spaces; j++) {
            printf("+");
        }

        printf("\n");
    }

    return 0;
}
