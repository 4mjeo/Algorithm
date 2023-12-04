#include <stdio.h>
void sort(int arr[], int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
    int a,r=0,time[1001];
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&time[i]);
    }
    sort(time,a);
    for(int i=0;i<a;i++){
        for(int j=0;j<=i;j++){
            r += time[j];
        }
    }
    printf("%d",r);
    return 0;
}