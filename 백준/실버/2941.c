#include <stdio.h>
#include <string.h>
int main() {
    int cnt=0;
    char s[101];
    scanf("%s",s);
    int len = strlen(s);
    for(int i=0;i<len;i++) {
        cnt++;
        if(s[i] == 'c' && (s[i+1] == '=' || s[i+1] == '-')) i++;
        else if(s[i] == 'd' && s[i+1] == 'z' && s[i+2] == '=') i+=2;
        else if((s[i] == 'd' && s[i+1] == '-') || (s[i] == 'l' && s[i+1] == 'j') || (s[i] == 'n' && s[i+1] == 'j')) i++;
        else if((s[i] == 's' && s[i+1] == '=') || (s[i] == 'z' && s[i+1] == '=')) i++;
    }
    printf("%d",cnt);
    return 0;
}