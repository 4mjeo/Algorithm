#include <stdio.h>
void asc(int arr[], int n) {
    for(int i=0;i<n;i++) {
        int least = i;
        for(int j=i+1;j<n;j++) {
            if(arr[j] < arr[least]) {
                least = j;
            }
        }
        int tmp = arr[i];
        arr[i] = arr[least];
        arr[least] = tmp;
    }
}
void desc(int arr[], int n) {
    for(int i=0;i<n;i++) {
        int max = i;
        for(int j=i+1;j<n;j++) {
            if(arr[j] > arr[max]) {
                max = j;
            }
        }
        int tmp = arr[i];
        arr[i] = arr[max];
        arr[max] = tmp;
    }
}
int main() {
    int n;
    scanf("%d",&n);
    int a[n], b[n], s=0;
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++) scanf("%d",&b[i]);
    asc(a, n);
    desc(b, n);
    for(int i=0;i<n;i++) {
        s += a[i] * b[i];
    }
    printf("%d",s);
    return 0;
}