#include <stdio.h>
int main(){
    int N,M;
    int arr[101],a[101]={0},b[101][101]={0};
    scanf("%d %d",&N,&M);
    for(int i=1;i<=M;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<=M;i++){
        int cnt=0;
        for(int j=1;j<=N;j++){
            scanf("%d",&b[i][j]);
            if(b[i][j] == arr[i]){
                a[j]++;
                cnt++;
            }
        }
        a[arr[i]] += N-cnt;
    }
    for(int i=1;i<=N;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}