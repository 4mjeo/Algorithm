#include <stdio.h>
int main(){
    char arr[100];
    scanf("%s",arr);
    for(int i=0;i<sizeof(arr);i++){
        if(arr[i] != 0){
            if(arr[i]>='A' && arr[i]<='Z')
                arr[i] += 32;
            else if(arr[i]>='a' && arr[i]<='z')
                arr[i] -= 32;
        }
    }
    printf("%s",arr);
    return 0;
}