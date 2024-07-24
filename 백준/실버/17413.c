#include <stdio.h>
#include <string.h>
char s[100001], stack[100001];
int top=0,i=0;
int main() {
    scanf("%[^\n]", s);
    while(s[i]) {
        if (s[i] == '<') {
            while(top>0) {
                printf("%c", stack[--top]);
            }
            while(s[i] != '>') {
                printf("%c", s[i++]);
            }
            printf("%c", s[i++]);
        }else if(s[i] == ' ' || s[i] == '\0') {
            while(top > 0) {
                printf("%c", stack[--top]);
            }
            if (s[i] != '\0') {
                printf("%c", s[i++]);
            }
        } else {
            stack[top++] = s[i++];
        }
    }
    while(top>0) {
        printf("%c", stack[--top]);
    }
    return 0;
}
