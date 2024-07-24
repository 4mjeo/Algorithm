#include <stdio.h>
int main(){
    int n,l,key;
    scanf("%d %d",&n,&l);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<n;i++){
        key = a[i];
        int j;
        for(j=i-1;j>=0 && a[j]>key;j--){
            a[j+1] = a[j];
        }
        a[j+1] = key;
    }
    for(int i=0;i<n;i++){
        if(a[i]<=l) l++;
    }
    printf("%d",l);
    return 0;
}
