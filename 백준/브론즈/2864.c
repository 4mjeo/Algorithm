#include <stdio.h>
int main(){
    char a[8],b[8];
    int minA=0,minB=0,maxA=0,maxB=0;
    scanf("%s %s",a,b);
    for(int i=0;a[i];i++){
        maxA = maxA * 10 + (a[i] == '5' ? 6 : a[i] - '0');
    }
    for(int i=0;b[i];i++){
        maxB = maxB * 10 + (b[i] == '5' ? 6 : b[i] - '0');
    }
    for(int i=0;a[i];i++){
        minA = minA * 10 + (a[i] == '6' ? 5 : a[i] - '0');
    }
    for(int i=0;b[i];i++){
        minB = minB * 10 + (b[i] == '6' ? 5 : b[i] - '0');
    }
    printf("%d %d", minA+minB,maxA+maxB);
    return 0;
}
