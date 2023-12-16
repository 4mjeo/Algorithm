#include <stdio.h>
#include <stdlib.h>
int main(){
    long long int n;
    scanf("%lld",&n);
    long long int a[n];
    int r=n*2;
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
        r += a[i]*2;
        if(i>0){
            r += abs(a[i]-a[i-1]);
        }
    }
    r += a[0]+a[n-1];
    printf("%lld\n",r);
    return 0;
}
