#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int compare(const void *a, const void *b) {
    int n1 = *(int*)a;
    int n2 = *(int*)b;
    if(n1 < n2) return -1;
    if(n1 > n2) return 1;
    return 0;
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n], sum=0, max=0;
    int cnt[8001] = {0,};
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        sum += arr[i];
        cnt[arr[i] + 4000]++;
        if(cnt[arr[i] + 4000] > max) {
            max = cnt[arr[i] + 4000];
        }
    }
    qsort(arr, n, sizeof(int), compare);
    int tmp = 4001, check=0;
    for(int i=0;i<8001;i++) {
        if(cnt[i] == max) {
            tmp = i-4000;
            check++;
            if(check == 2) break;
        }
    }
    
    printf("%d\n",(int)round((double)sum / n));
    printf("%d\n",arr[n / 2]);
    printf("%d\n",tmp);
    printf("%d\n",arr[n-1] - arr[0]);
    return 0;
}
