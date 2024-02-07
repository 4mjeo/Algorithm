#include <stdio.h>
int n,a,b,cnt[11],arr[11];
int main() {
    scanf("%d",&n);
    for(int i=0;i<11;i++) arr[i] = -1;
    for(int i=0;i<n;i++) {
        scanf("%d %d",&a,&b);
        if(arr[a] == -1) arr[a] = b;
        else if(arr[a] != b) {
            arr[a] = b;
            cnt[a]++;
        }
    }
    int sum=0;
    for(int i=0;i<11;i++) sum += cnt[i];
    printf("%d",sum);
    return 0;
}