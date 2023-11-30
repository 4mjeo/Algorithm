#include <stdio.h>
#include <string.h>
void sort(char arr[], int x){
    for(int i=0;i<x-1;i++){
        for(int j=0;j<x-i-1;j++){
            if(arr[j]<arr[j+1]){
                char temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
    char n[11];
    scanf("%s",n);
    sort(n,strlen(n));
    printf("%s",n);
    return 0;
}