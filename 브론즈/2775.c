#include <stdio.h>
int main(){
    int n,a,b,arr[15][15]={0,};
    for(int i=1;i<15;i++){
        arr[0][i] = i;
    }
    for(int i=1;i<15;i++){
        for(int j=1;j<15;j++){
            arr[i][j] = arr[i-1][j] + arr[i][j-1];
        }
    }
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        printf("%d\n",arr[a][b]);
    }
    return 0;
}
