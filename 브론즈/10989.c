#include <stdio.h>
int main(){
    int n,a,arr[10001]={0,};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        arr[a]++;
    }
    for(int i=1;i<=10000;i++){
        for(int j=0;j<arr[i];j++){
            printf("%d",i);
        }
    }
    return 0;
}