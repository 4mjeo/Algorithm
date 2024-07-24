#include <stdio.h>
#include <string.h>
int main(){
    int n,min=0,max=0,d,m,y;
    int small=9999999,big=-1;
    char name[15],a[15],b[15];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s %d %d %d",name,&d,&m,&y);
        int date = y*1000 + m*100 + d;
        if(date<small){
            small = date;
            strcpy(a,name);
        }
        if(date>big){
            big = date;
            strcpy(b,name);
        }
    }
    printf("%s\n%s",b,a);
    return 0;
}
