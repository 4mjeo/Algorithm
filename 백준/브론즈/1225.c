#include <stdio.h>
#include <string.h>
int main(){
    char a[10001];
    char b[10001];
    long long int x=0;
    scanf("%s %s",a,b);
    for(int i=0;i<strlen(a);i++){
        for(int j=0;j<strlen(b);j++){
            x += (a[i]-'0')*(b[j]-'0');
        }
    }
    printf("%lld",x);
    return 0;
}