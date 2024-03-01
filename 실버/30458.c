#include <stdio.h>
#include <string.h>
int main()
{
    int len,cnt[26]={0,};
    char s[200001];
    scanf("%d",&len);
    scanf("%s",s);
    for(int i=0;i<len;i++) {
        cnt[s[i] - 'a']++;
    }
    if(len%2 != 0) cnt[s[len/2] - 'a']--;
    for(int i=0;i<26;i++){
        if(cnt[i]%2 != 0) {
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}