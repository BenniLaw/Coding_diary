# include <stdio.h>
# include <string.h>

int main(){
    // input
    char s1[100] = {0};
    char s2[100] = {0}; 
    fgets(s1, 99, stdin);
    fgets(s2, 99, stdin); 

    int len1 = strlen(s1) - 1;
    int len2 = strlen(s2) - 1;
    int flag = 0;
    for(int i = 0; i <= len1 - len2; i++){          // 遍历到能完整容纳子串的位置就停, s1 里找 s2，如果 s2 比较长，那么 s1 的最后几位已经不够长度让你匹配了，所以没必要继续找。
        if(s1[i] == s2[0]){      
            int j;                               // 遇到s1中与s2第一个元素一样的开始找
                                         // k 用于指向 s2 的索引                             
            for(j = i; j < i + len2 + 1; j++){        // j 从 s1 的 i 位置开始走，一共比 len(s2)-1 个字符, 相当于走str2的长度
                if(s1[j] != s2[j-i]){                             //  如果字符不相等，则停止匹配，跳出内层循环
                    break;
                }
                                                     // s2 往下一个字符比
            }
            if(j == (i + len2 + 1)){                                // 看 k 比了几次, 如果 k == strlen(s2) - 1，说明完整匹配. 不可以上面的循环执行完了就执行这一句, 因为上面的break不能跳出双重循环
                printf("%d ", i);                                // 找到s2, 输出位置
                flag = 1;
            }
            
        }
    }
    if(flag == 0){
        printf("-1");
    }
    return 0;
}