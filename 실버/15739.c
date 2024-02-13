
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n][n];
    int r[2*n+2], a[n*n+1];
    for(int i=0;i<2*n+2;i++) r[i] = 0;
    for(int i=0;i<n*n+1;i++) a[i] = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &arr[i][j]);
            a[arr[i][j]] += 1;
            r[i] += arr[i][j];
            r[n+j] += arr[i][j];
            if(i==j) r[2*n] += arr[i][j];
            if(i+j == n-1) r[2*n+1] += arr[i][j];
        }
    }
    int tmp = 1;
    for(int i=1;i<=n*n;i++){
        if(a[i] != 1){
            tmp = 0;
            break;
        }
    }
    for(int i=0;i<2*n+1;i++){
        if(r[i] != r[i+1]){
            tmp = 0;
            break;
        }
    }
    if(tmp == 1) printf("TRUE");
    else printf("FALSE");
    return 0;
}
