#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    if(a!=0 && a<=23){
        if(b>=45){
            b -=45;
            printf("%d %d",a,b);
        }
        else if(b<45){
            a--;
            b +=15;
            printf("%d %d",a,b);
        }
    }
    else if(a==0){
        if(b>=45){
            b -=45;
            printf("%d %d",a,b);
        }
        else if(b<45){
            a=23;
            b +=15;
            printf("%d %d",a,b);
        }
    }
    return 0;
}