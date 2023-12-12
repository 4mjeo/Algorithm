#include <stdio.h>
int main(){
    int month,day,r=0;
    scanf("%d %d",&month,&day);
    int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    char c[7][4]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
    for(int i=0;i<month-1;i++){
        r+=arr[i];
    }
    r+=day-1;
    printf("%s",c[r%7]);
    return 0;
}