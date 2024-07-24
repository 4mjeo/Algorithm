#include <stdio.h>
int main() {
    int n,m,cnt;
    int arr[100] = {0,};
    scanf("%d",&cnt);
    for(int i=0;i<cnt;i++) {
        scanf("%d %d",&n,&m);
        int a=1, front=0, max=0;
        for(int j=0;j<n;j++) {
            scanf("%d",&arr[j]);
        }
        while(1) {
            for(int k=0;k<n;k++) {
                if(arr[k] > max) max = arr[k];
            }
            while(arr[front] != max) {
                front = (front + 1) % n;
            }
            if(front == m) break;
            arr[front] = 0;
            front = (front + 1) % n;
            max=0;
            a++;
        }
        printf("%d\n",a);
    }
    return 0;
}