#include <stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    int max=0;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                int sum = a[i] + a[j] + a[k];
                if(sum <= m && sum > max){
                    max = sum;
                }
            }
        }
    }
    printf("%d",max);
    return 0;
}
