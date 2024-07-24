#include <stdio.h>
int main(){
    char s[1001],c[5]="UCPC";
    int check=0;
    scanf("%[^\n]s",s);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==c[check]) check++;
        if(check==4) break;
    }
    if(check==4) printf("I love UCPC");
    else printf("I hate UCPC");
    return 0;
}
