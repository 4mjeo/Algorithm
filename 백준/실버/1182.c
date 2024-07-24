#include <stdio.h>
int n,s,cnt=0;
int arr[20];
void check(int tmp, int sum) {
    if(tmp == n) {
        if(sum == s) cnt++;
        return;
    }
    check(tmp+1, sum+arr[tmp]);
    check(tmp+1, sum);
}
int main() {
    scanf("%d %d",&n,&s);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    check(0, 0);
    if(s==0) cnt--;
    printf("%d",cnt);
    return 0;
}