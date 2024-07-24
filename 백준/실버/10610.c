#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int compare(const void *a, const void *b){
    char n = *(char*)a;
    char m = *(char*)b;
    if(n>m) return -1;
    if(n<m) return 1;
    return 0;
}
int main(){
    int sum=0,a=0;
    char s[100001];
    scanf("%s",s);
    int len = strlen(s);
    for(int i=0;i<len;i++){
        int tmp = s[i]-'0';
        if(tmp==0) a=1;
        sum += tmp;
    }
    if(a==0 || sum%3 != 0) printf("-1");
    else {
        qsort(s, len, sizeof(char), compare);
        printf("%s",s);
    }
    return 0;
}