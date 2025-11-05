# include <stdio.h>
int main(){
    int ID[17] = {0};

    // input 17 bits
    int length = sizeof(ID) / sizeof(ID[0]); 
    for(int i = 0; i < length; i++){
        scanf("%1d", &ID[i]);
    }

    // computing
    int coefficient[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    int sum = 0;
    for(int i = 0; i < length; i++){
        sum += ID[i] * coefficient[i];
    }
    
    // check
    char check[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
    printf("%c", check[sum % 11]);

    return 0;

}

// 每次只读一个字符可以通过两种常见方法实现目标。

/* 1️⃣方法一: 使用 %1d —— 每次读取一个数字
#include <stdio.h>
int main() {
    int arr[10];
    for (int i = 0; i < 7; i++) {
        scanf("%1d", &arr[i]);  // 每次只读一个数字
    }

    // 打印验证
    for (int i = 0; i < 7; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}*/

/* 2️⃣方法二：先读成字符串，再拆分
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int arr[100];
    scanf("%s", s);  // 读成字符串，比如 "5139222"

    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        arr[i] = s[i] - '0';  // 字符转数字
    }

    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
*/