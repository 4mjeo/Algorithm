#include <stdio.h>
#include <string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--) {
        char str[10000], arr[100][100];
        scanf("%s",str);
        int len=0;
        while(str[len] != '\0') len++;
        int n=0;
        while (n * n < len) n++;
        int tmp=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                arr[i][j] = str[tmp++];
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                printf("%c", arr[j][n-i-1]);
        printf("\n");
    }
    return 0;
}
