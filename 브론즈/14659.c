#include <stdio.h>
int main() {
    int a,n,max=0, r=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++) {
        if(arr[i] > max) {
            max = arr[i]; 
            a = 0;
        } else {
            a++;
        }
        if(a > r) {
            r = a;
        }
    }
    printf("%d",r);
    return 0;
}
