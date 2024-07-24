#include <stdio.h>
int main() {
    int n,sum=0;
    int arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=n-1;i>0;i--) {
        if(arr[i] <= arr[i-1]) {
            sum += arr[i-1] - arr[i]+1;
            arr[i-1] = arr[i]-1;
        }
    }
    printf("%d",sum);
    return 0;
}