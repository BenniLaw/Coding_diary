//StudybarCommentBegin
#include <stdio.h>
#include <string.h>
int main()
{
    void GetOthers(char s[]);
    char str[100];
    gets(str);
    GetOthers(str);
    printf("%s",str); 
}
//StudybarCommentEnd

void GetOthers(char s[]){
    int length = strlen(s);  // get length
    // 定义快慢指针
    int fast = 0;
    int slow = 0;
    for (; fast < length; fast++){
        if (!((s[fast] >= 'a' && s[fast] <= 'z') || (s[fast] >= 'A' && s[fast] <= 'Z'))){
            s[slow] = s[fast];
            slow++;
        }
    }
    s[slow] = '\0';
}