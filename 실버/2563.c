#include <stdio.h>
int main(){
    int arr[100][100]={0,};
    int n,a,b,cnt = 0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        for(int j=a;j<a+10;j++){
            for(int k=b;k<b+10;k++){
                arr[j][k] = 1;
            }
        }
    }
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            if(arr[i][j] == 1) cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}